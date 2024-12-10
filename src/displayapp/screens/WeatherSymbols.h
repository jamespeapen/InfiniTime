#pragma once
#include "components/ble/SimpleWeatherService.h"
#include "displayapp/screens/Symbols.h"
#include "displayapp/InfiniTimeTheme.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace Symbols {
        const char* GetSymbol(const Pinetime::Controllers::SimpleWeatherService::Icons icon);
        const char* GetCondition(const Pinetime::Controllers::SimpleWeatherService::Icons icon);
        lv_color_t GetColor(const Pinetime::Controllers::SimpleWeatherService::Temperature temp);
      }
    }
  }
}
