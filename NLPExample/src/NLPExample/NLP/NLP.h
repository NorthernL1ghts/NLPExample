#pragma once

#include "PCH.h"

namespace NLPExample {
    namespace NLP {
        class NLP {
        public:
            NLP();
            ~NLP();

            void InitializeStopwords(const std::unordered_set<std::string>& stopWords);
            void Tokenize(const std::string& text, std::vector<std::string>& tokens) const;
            void AnalyzeText(const std::string& text);
            std::unordered_map<std::string, int> GetWordFrequencies() const;
            std::unordered_set<std::string> GetNouns() const;

        private:
            std::unordered_set<std::string> m_StopWords;
            std::unordered_map<std::string, int> m_WordFrequencies;
            std::unordered_set<std::string> m_Nouns;

            void TokenizeAndCount(const std::string& text);
        };
    }
}