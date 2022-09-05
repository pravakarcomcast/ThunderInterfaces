#pragma once

#include "Module.h"

namespace WPEFramework {
    namespace Exchange {

        // @json
        struct EXTERNAL IAirplay : virtual public Core::IUnknown {
            enum { ID = ID_AIRPLAY};

            virtual ~IAirplay() { }

            virtual uint32_t startAirplayApp(string &param/* @out */) const = 0;


    };
    }
}