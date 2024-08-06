#include "Application.h"
#include "PCH.h"

namespace NLPExample {
    namespace Core {

        Application::Application() {
            Initialize();
        }

        void Application::Initialize() {
            // Initialization logic
        }

        void Application::Run() {
            std::string input;
            std::cout << "Enter text: ";
            std::getline(std::cin, input);
            ProcessInput(input);
            DisplayWordFrequencies();
        }

        Application::~Application() {
            // Cleanup logic if needed
        }

        void Application::ProcessInput(const std::string& input) {
            std::istringstream stream(input);
            std::string word;
            while (stream >> word) {
                ++m_WordFrequencies[word];
            }
        }

        void Application::DisplayWordFrequencies() {
            std::cout << "Word frequencies:\n";
            for (const auto& pair : m_WordFrequencies) {
                std::cout << pair.first << ": " << pair.second << "\n";
            }
        }
    }
}
