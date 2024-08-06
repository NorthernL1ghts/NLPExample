#include "PCH.h"
#include "EntryPoint.h"
#include "Core/Application.h"

namespace NLPExample {
    namespace EntryPoint {
        int EntryPoint::Main() {
            // Create the application instance
            NLPExample::Core::Application app;

            // Run the application
            app.Run();

            return 0; // Technically this does not need to be here as of C++20 (Visual Studio 2019+) it's explictly called.
        }
    }
}