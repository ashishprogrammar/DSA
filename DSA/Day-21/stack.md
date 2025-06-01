# Valid Parenthesis String

This program checks whether a given string containing `'('`, `')'`, and `'*'` is valid. A string is considered **valid** if:
- Every `'('` has a corresponding `')'`.
- Every `')'` has a matching `'('` or a `'*'` acting as `'('`.
- `'*'` can be treated as `'('`, `')'`, or an empty string.

### ✅ Example Valid Strings:
- `()`
- `(*)`
- `(*))`
- `((*)`

### ❌ Example Invalid Strings:
- `(()`
- `)*(`

---

## 💻 How It Works

The program uses **two stacks**:
- One to store the indices of `'('`
- Another to store the indices of `'*'`

It processes the string character by character:
- If `'('`, push its index to the `(` stack.
- If `'*'`, push its index to the `*` stack.
- If `')'`, pop from `(` stack if available; else use `*` if available; otherwise, the string is invalid.

At the end, remaining unmatched `'('` must be matched with later `'*'` (acting as `')'`).

---

## 🧪 Sample Input / Output

Input: (*))
Output: true

Input: ((*)
Output: true

Input: ((*)(
Output: false

---

## 🚀 How to Compile and Run

```bash
g++ ValidParenthesisString.cpp -o check
./check
