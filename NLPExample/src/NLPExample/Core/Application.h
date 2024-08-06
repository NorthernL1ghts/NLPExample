#pragma once

#include "PCH.h"

namespace NLPExample {
    namespace Core {
        class Application {
        public:
            Application();
            virtual~Application();
            
            void Run();

        private:
            // Declare member variables
            void Initialize();
            void ProcessInput(const std::string& input);
            void DisplayWordFrequencies();
            std::unordered_map<std::string, int> m_WordFrequencies;
        };
    }
}


