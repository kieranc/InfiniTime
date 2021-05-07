#pragma once
#include <lvgl/lvgl.h>
#include "Screen.h"

namespace Pinetime {
  namespace Components {
    class LittleVgl;
  }
  namespace Applications {
//     struct ATile {
//       bool merged = false;
//       unsigned int value = 0;
//     };
    namespace Screens {
      class AnimTest : public Screen {
      public:
        AnimTest(DisplayApp* app, Pinetime::Components::LittleVgl& lvgl);
        ~AnimTest() override;
        bool Refresh() override;

        //bool OnTouchEvent(TouchEvents event) override;

      private:
          Pinetime::Components::LittleVgl& lvgl;
//           lv_obj_t* img_src;
//           lv_img_dsc_t* my_images;
//         lv_obj_t* scoreText;
//         lv_obj_t* gridDisplay;
//         Tile grid[4][4];
//         unsigned int score = 0;
//         void updateGridDisplay(Tile grid[][4]);
//         bool tryMerge(Tile grid[][4], int& newRow, int& newCol, int oldRow, int oldCol);
//         bool tryMove(Tile grid[][4], int newRow, int newCol, int oldRow, int oldCol);
//         bool placeNewTile();
      };
    }
  }
}
