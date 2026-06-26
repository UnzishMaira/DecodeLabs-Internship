/**
 * Project 1: Rule-Based AI Chatbot
 * DecodeLabs - Artificial Intelligence Internship 2026
 * 
 * DISCRETE MAPPING: Exact Match Lookup
 * Hardcoded Link: KEY → VALUE
 * No semantic memory. No vectors. No embeddings.
 * Just pure if-else logic and dictionary lookups.
 * 
 * THE WHITE BOX: Input -> Logic -> Output. No mystery.
 */

#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>
#include <algorithm>
using namespace std;

class RuleBasedChatbot {
private:
    
    // EXACT MATCH ONLY - No semantic understanding
    unordered_map<string, string> knowledgeBase;
    
    int messageCount;
    
    /**
     * Initialize knowledge base with exact match keys
     * Project 1: Discrete Mapping (Exact Match)
     * KEY → RIGID STRUCTURE → VALUE
     */
    void initializeKnowledgeBase() {
        // GREETINGS - Exact match
        knowledgeBase["hello"] = " Hello! Welcome to DecodeLabs.";
        knowledgeBase["hi"] = " Hi there! How can I help you?";
        knowledgeBase["hey"] = " Hey! What brings you here?";
        knowledgeBase["studies"]="Oh what do you study?";
        knowledgeBase["computer science"]="Wow ! Thats amazing, I can help you with your code";
        knowledgeBase["thanks cleopatra"]="Ofcourse! Anytime, I am happy to help";
        knowledgeBase["good morning"] = " Good morning! Have a productive day!";
        knowledgeBase["good afternoon"] = " Good afternoon! How can I assist you?";
        knowledgeBase["good evening"] = " Good evening! Ready to learn?";
        
        // IDENTITY - Exact match
        knowledgeBase["who are you"] = " I'm an AI ChatBot, your AI assistant from DecodeLabs.";
        knowledgeBase["what is your name"] = " My name is Cleopatra .";
        knowledgeBase["what can you do"] = " I respond to predefined inputs using exact matching.";
        knowledgeBase["who made you"] = " I was created by Unzish for her DecodeLabs project 1.";
        
        // DECODELABS - Exact match
        knowledgeBase["what is decode labs"] = "DecodeLabs is an AI education company in Greater Lucknow, India.";
        knowledgeBase["tell me about decodelabs"] = " DecodeLabs provides hands-on AI training through projects.";
        knowledgeBase["where is decodelabs"] = " Greater Lucknow, India. ";
        
        // AI CONCEPTS - Exact match
        knowledgeBase["what is ai"] = " AI is Artificial Intelligence it makes computers smart.";
        knowledgeBase["what is rule based ai"] = " Rule-based AI uses if-else statements.";
        knowledgeBase["what is a chatbot"] = " A chatbot simulates conversation using rules.";
        knowledgeBase["what is machine learning"] = " ML is when computers learn from data. ";
        
        // PROJECT - Exact match
        knowledgeBase["tell me about project 1"] = "Project 1: Rule-Based AI Chatbot using exact matching.";
        knowledgeBase["what is project 1"] = " Building a rule-based chatbot with dictionary lookups.";
        knowledgeBase["how does this work"] = " I check your exact input against my dictionary.";
        
        // HELP - Exact match
        knowledgeBase["help"] = "I understand exact commands. Try: hello, who are you, what is ai, help";
        knowledgeBase["commands"] = " Commands: hello, hi, who are you, what is ai, help, exit";
        
        // EMOTIONS - Exact match
        knowledgeBase["how are you"] = "I'm great! Thanks for asking.";
        knowledgeBase["thank you"] = " You're welcome! Keep learning.";
        knowledgeBase["thanks"] = " You're very welcome!";
        knowledgeBase["goodbye"] = " Goodbye! Keep building!";
        knowledgeBase["bye"] = " Bye! Remember: Project 1 is exact matching.";
        
        // MOTIVATIONAL - Exact match
        knowledgeBase["i love ai"] = " That's great! Keep learning!";
        knowledgeBase["motivate me"] = " You can do this! Start with Project 1.";
        knowledgeBase["keep going"] = " Yes! Consistency is key.";
    }
    
    /**
     * EXACT MATCH SANITIZATION
     * Just case and whitespace handling - no semantic processing
     */
    string sanitizeInput(const string& input) {
        string clean = input;
        
        // Convert to lowercase (for case-insensitive exact match)
        transform(clean.begin(), clean.end(), clean.begin(), ::tolower);
        
        // Trim whitespace
        size_t start = clean.find_first_not_of(" \t\n\r");
        if (start == string::npos) return "";
        size_t end = clean.find_last_not_of(" \t\n\r");
        clean = clean.substr(start, end - start + 1);
        
        // Remove punctuation from ends (for cleaner matching)
        while (!clean.empty() && !isalnum(clean[0]) && clean[0] != ' ') {
            clean.erase(0, 1);
        }
        while (!clean.empty() && !isalnum(clean[clean.length() - 1])) {
            clean.pop_back();
        }
        
        return clean;
    }
    
    /**
     * Check if input is an exit command
     */
    bool isExitCommand(const string& input) {
        vector<string> exits = {"exit", "quit", "goodbye", "bye", "end", "stop"};
        return find(exits.begin(), exits.end(), input) != exits.end();
    }

public:
    RuleBasedChatbot() {
        messageCount = 0;
        initializeKnowledgeBase();
        
        cout<<"*******************************************************"<<endl;
        cout << "*     PROJECT 1: RULE-BASED AI CHATBOT                *" << endl;
        cout << "*     DISCRETE MAPPING - EXACT MATCH ONLY             *" << endl;

        cout << "*     KEY  RIGID STRUCTURE  VALUE                     *" << endl;
        cout << "*     No semantic memory. No vectors. No embeddings.  *" << endl;
        cout << "*     Just exact matches and if-else logic.           *" << endl;
        
        cout << "*     Type 'help' for commands                        *" << endl;
        cout << "*     Type 'exit' to quit                             *" << endl;
        cout<<"*******************************************************"<<endl;
        cout<<" \n";
    }
    
    /**
     * THE HEARTBEAT: INFINITE LOOP
     * Continuous loop until kill command
     */
    void run() {
        string userInput;
        string cleanInput;
        
        while (true) {
            // INPUT
            cout << "You: ";
            getline(cin, userInput);
            
            if (cin.eof()) {
                cout << "\nBot: Session ended." << endl;
                break;
            }
            
            if (userInput.empty()) {
                cout << "Bot: Please say something!" << endl;
                continue;
            }
            
            // PHASE 1: INPUT & SANITIZATION
            cleanInput = sanitizeInput(userInput);
            
            if (cleanInput.empty()) {
                cout << "Bot: I didn't catch that." << endl;
                continue;
            }
            
            // KILL COMMAND
            if (isExitCommand(cleanInput)) {
                cout << "\n Cleopatra: Goodbye! Thanks for chatting." << endl;
                cout << "   Remember: Project 1 = Exact Matching" << endl;
                cout << "   Project 2 = Semantic Matching" << endl;
                cout << "   Messages exchanged: " << messageCount << endl;
            
                break;
            }
            
            messageCount++;
            
            // PROCESS: EXACT MATCH LOOKUP (O(1))
            // Project 1: Discrete Mapping (Exact Match)
            // Hardcoded Link: KEY → VALUE
            string response;
            
            auto it = knowledgeBase.find(cleanInput);
            
            if (it != knowledgeBase.end()) {
                // EXACT MATCH FOUND
                response = it->second;
            } else {
                // NO EXACT MATCH - FALLBACK
                response = "I don't understand that.\n"
                           "   This is Project 1 - I only understand EXACT matches.\n"
                           "   Try: hello, who are you, what is ai, help\n"
                           "   (No semantic understanding - that's for Project 2!)";
            }
            
            // OUTPUT
            cout << "Bot: " << response << endl;
    
        }
    }
};

int main() {
    RuleBasedChatbot chatbot;
    chatbot.run();
    return 0;
}
