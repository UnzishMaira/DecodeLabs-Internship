# DecodeLabs AI Internship Projects

**Batch:** 2026  
**Student:** Unzish  
**Powered by:** DecodeLabs

---

## 📋 About This Repository

This repository contains all projects completed during my **Artificial Intelligence Internship** at **DecodeLabs**. Each project demonstrates different AI concepts, from rule-based systems to machine learning classification.

---

## 📁 Completed Projects

### ✅ Project 1: Rule-Based AI Chatbot

| Detail | Information |
|--------|-------------|
| **Status** | ✅ COMPLETED |
| **Language** | C++ |
| **Topic** | Discrete Mapping - Exact Match Only |
| **Key Concept** | Control flow, decision-making logic, dictionary lookups |

A rule-based AI chatbot that responds to predefined user inputs using dictionary-based lookups with **O(1) complexity**.

**Key Features:**
- 🔄 Continuous loop with clean exit commands
- 🧹 Input sanitization (case & whitespace handling)
- 📚 Knowledge base with 20+ intents
- ⚡ O(1) hash map lookup using `unordered_map`
- 🔍 White box architecture (100% traceable)

**📂 Location:** [Project-1-Rule-Based-Chatbot](./Project-1-Rule-Based-Chatbot)

---

### ✅ Project 2: Data Classification Using AI

| Detail | Information |
|--------|-------------|
| **Status** | ✅ COMPLETED |
| **Language** | Python |
| **Topic** | Supervised Learning - KNN |
| **Key Concept** | Data preprocessing, model training, evaluation |

A machine learning classification model built using the **Iris dataset** with **K-Nearest Neighbors (KNN)** algorithm.

**Key Features:**
- 📊 Load and understand the Iris dataset (150 samples, 4 features, 3 classes)
- 🔀 Train-Test split (80% training, 20% testing)
- 📐 Feature scaling with StandardScaler
- 🤖 K-Nearest Neighbors classification
- 🔧 Hyperparameter tuning (finding optimal k value)
- 📈 Model evaluation (Accuracy, F1 Score, Confusion Matrix)
- 🔄 Cross-validation (5-fold)
- 🔮 Predictions on new samples

**📂 Location:** [Project-2-Data-Classification](./Project-2-Data-Classification)

---

## 🚀 How to Run Projects

### Project 1: Rule-Based AI Chatbot (C++)

```bash
# Navigate to project folder
cd Project-1-Rule-Based-Chatbot

# Compile the code
g++ -std=c++11 chatbot_ai.cpp -o chatbot

# Run the chatbot
./chatbot       # On Mac/Linux
chatbot.exe     # On Windows


# Navigate to project folder
cd Project-2-Data-Classification

# Install dependencies
pip install -r requirements.txt

# Run the code
python project2.py


---
**Author: ** Unzish | DecodeLabs AI Internship 2026
