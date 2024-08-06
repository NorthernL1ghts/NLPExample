#include "NLP.h"

namespace NLPExample {
    namespace NLP {
        NLP::NLP() {}

        NLP::~NLP() {}

        void NLP::InitializeStopwords(const std::unordered_set<std::string>& stopWords) {
            m_StopWords = stopWords;
        }

        void NLP::Tokenize(const std::string& text, std::vector<std::string>& tokens) const {
            std::istringstream stream(text);
            std::string token;
            while (stream >> token) {
                // Convert to lowercase
                std::transform(token.begin(), token.end(), token.begin(), ::tolower);
                tokens.push_back(token);
            }
        }

        void NLP::AnalyzeText(const std::string& text) {
            TokenizeAndCount(text);
        }

        std::unordered_map<std::string, int> NLP::GetWordFrequencies() const {
            return m_WordFrequencies;
        }

        std::unordered_set<std::string> NLP::GetNouns() const {
            return m_Nouns; // Currently not implementing noun extraction
        }

        void NLP::TokenizeAndCount(const std::string& text) {
            std::vector<std::string> tokens;
            Tokenize(text, tokens);

            m_WordFrequencies.clear();
            for (const auto& token : tokens) {
                if (m_StopWords.find(token) == m_StopWords.end()) {
                    m_WordFrequencies[token]++;
                }
            }
        }
    }
}
