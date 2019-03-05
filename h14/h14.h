/**
    @file h14.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H14_H_
#define H14_H_

/**
 *  Calculates an alternating sum of the elements in a.
 *  @param a an array of const int.
 *  @param size the number of elements in the array.
 *  @pre #size is > 0
 *  @return the alternating sum of {a, b, c, d} -> a - b + c - d
 *  Don't worry about overflow of the result.
 */
int alternatingSum(const int a[], size_t size);

struct MinMax
{
    const double * min = nullptr;
    const double * max = nullptr;
};
/**
 * Returns pointers to the extreme values in the array.
 * @param a pointer the first element in an array of doubles
 * @param size the number of elements in the array.
 * @return a MinMax structure; nullptrs if size is 0.
 */
MinMax minMax(const double *ptr, size_t size);

using UC = unsigned char;
struct Pixel {UC red{0}, green{0}, blue{0}, alpha{255};};

/**
 * Rotates an image in both the dx and dy directions.
 * Pixels wrap around as required.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 * @param dx the amount to shift in the x dimension.
 * @param dy the amount to shift in the y dimension
 * Assume 4 bits per pixel
 */
void translate(UC* const img, int width, int height, int dx, int dy);

// Functions from stb_image and stb_image_write
// These are C functions
extern "C" {
unsigned char* stbi_load(const char* fileName,
    int* width, int* height, int* bitsPerChannel,
    int desiredBpp=4);

 int stbi_write_png(const char* fName, int width, int height,
    int comp, const void *data, int stride);
 int stbi_write_bmp(const char* fName, int width, int height,
    int comp, const void *data);
 int stbi_write_jpg(const char* fName, int width, int height,
    int comp, const void *data, int quality);

 void stbi_image_free (void *);
};

#endif
