// 4.14.0 0x05994e15
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_progressindicators_bg_large_progress_indicator_bg_square_0_degrees[]; // BITMAP_BLUE_PROGRESSINDICATORS_BG_LARGE_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID = 0, Size: 404x34 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_blue_progressindicators_bg_large_progress_indicator_bg_square_0_degrees, 0, 404, 34, 0, 0, 404, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 34, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
