# ✅ Leetcode 171: Excel Sheet Column Number

### 🧠 Problem Statement
Given a string `columnTitle` that represents the column title as appears in an Excel sheet, return its corresponding column number.

Excel follows this column naming convention:
- A → 1  
- B → 2  
- ...  
- Z → 26  
- AA → 27  
- AB → 28  
- ...  

### 🔗 Problem Link
[Leetcode 171 - Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)

---

### ✨ Examples
Input: columnTitle = "A"
Output: 1

Input: columnTitle = "AB"
Output: 28

Input: columnTitle = "ZY"
Output: 701


---

### 📌 Constraints
- `1 <= columnTitle.length <= 7`
- `columnTitle` consists only of uppercase English letters.
- The title is guaranteed to be a valid column title as in an Excel sheet.

---

### 💡 Intuition
Treat the Excel column title as a base-26 number, where:
- A = 1, B = 2, ..., Z = 26
- Multiply and add values just like converting a base-N number to base-10.

