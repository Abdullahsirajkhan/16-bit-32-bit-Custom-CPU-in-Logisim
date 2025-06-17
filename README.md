# 🧠 Logisim CPU Project – 32-bit Architecture

This project implements a modular, fully functional **32-bit CPU** using **Logisim Evolution**. Designed from scratch, it includes a complete data path, microcoded control unit, ROM-based instruction decoding, and sample programs. It also comes with C++ converters for binary and decimal operations related to CPU logic.

---

## 📌 Features

- ✅ 32-bit CPU design in `CPU_LOGISM.circ`
- 🧮 Microcoded Control ROM with opcodes from `ROM.txt`
- 🧠 Custom Instruction Set Architecture (ISA)
- 📋 Fully modular ALU (ADD, SUB, AND, OR, etc.)
- 🔁 Supports branching, jumps, and memory access
- 🧪 Manual and auto-clock support
- ⚙️ Bonus tools in C++ for binary/decimal conversion

---

## 🧱 Architecture Components

- **CPU_LOGISM.circ**: Main CPU built in Logisim
- **ROM.txt**: ROM program loader file with instructions
- **32_BIT_CPU_GUIDE.pdf**: Documentation and usage guide
- **logism_cpu_prequsites.docx**: Extra information about design
- **bin_to_dec_con_CPU.cpp/.exe**: Binary to Decimal converter
- **decimal_to_bin_converter_CPU.cpp/.exe**: Decimal to Binary converter
- **binary_addition.cpp/.exe**: C++ Binary Adder logic

---

## 🚀 How to Run

### Requirements:
- ✅ [Logisim Evolution](https://github.com/logisim-evolution/logisim-evolution)

### Steps:
1. Open `CPU_LOGISM.circ` in Logisim Evolution
2. Load instructions from `ROM.txt` into the ROM (manually or using script)
3. Run the CPU using the manual clock or auto-clock
4. Observe data changes in RAM, registers, and outputs

---

## 🧪 Example Instructions (ROM Opcodes)

| Mnemonic | Opcode | Description              |
|----------|--------|--------------------------|
| ADD      | 00001  | Add two registers         |
| SUB      | 00010  | Subtract registers        |
| LOAD     | 00100  | Load from memory to reg   |
| STORE    | 00101  | Store reg to memory       |
| JUMP     | 00111  | Jump to ROM address       |
| BR_EQ    | 01000  | Branch if equal           |

---

## 📂 Files in This Project

- `CPU_LOGISM.circ` → Main 32-bit CPU
- `ROM.txt` → ROM instruction data
- `32_BIT_CPU_GUIDE.pdf` → Full explanation guide
- `logism_cpu_prequsites.docx` → Theory & prerequisites
- `bin_to_dec_con_CPU.cpp` & `.exe` → Binary to Decimal converter
- `decimal_to_bin_converter_CPU.cpp` & `.exe` → Decimal to Binary converter
- `binary_addition.cpp` & `.exe` → C++ Binary Adder
- `LICENSE` → Open-source MIT License
- `README.md` → This file

---

## 🙋‍♂️ Author

**ABDULLAH SIRAJ KHAN**  
2nd Semester Computer Science Student, IBA Karachi  
📧 Email: abdullahsirajkhan2@gmail.com  
🔗 GitHub: https://github.com/Abdullahsirajkhan/16-bit-32-bit-Custom-CPU-in-Logisim

---

## ⚖️ License

This project is licensed under the **MIT License**.  
Feel free to use, modify, and share for educational purposes.

---

