#include "lib2.hh"
#include "easylogging++.h"

//  ** DO NOT USE _INITIALIZE_EASYLOGGINGPP IN LIBRARIES / APIs
//  ** COMMENT THEM OUT WHEN YOU HAVE FINISHED TESTING **

Lib2::Lib2()
{
    LINFO << "Lib2 initialized";
}
