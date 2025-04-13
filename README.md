## User Manual for the Multi-Utility Converter Project

This document provides a guide on how to use the Multi-Utility Converter project available on GitHub. This project offers a collection of useful conversion tools, including a calculator, temperature converter, length converter, and storage unit converter.

### Accessing the Project
1.  **Open your web browser.**
2.  **Navigate to the GitHub repository** where this project is hosted (you should have the repository link).
3.  **(Optional) Explore the repository:**
    * You can view the code files (`.h` and `.cpp` files) to understand how the different converters are implemented.
    * Read the main `README.md` file for a general overview of the project, its features, and potentially development information.
### Using the Converter
This project is a command-line application. To use it, you will need to:
1.  **Clone the repository (if you want to run it locally):**
    * Open your terminal or command prompt.
    * Navigate to the directory where you want to clone the project.
    * Use the following command, replacing `<repository_url>` with the actual URL of the GitHub repository:
        ```bash
        git clone <repository_url>
        ```
2.  **Compile the code:**
    * Navigate into the cloned repository directory in your terminal:
        ```bash
        cd <repository_name>
        ```
    * You will need a C++ compiler (like g++) installed on your system. Use the following command to compile all the `.cpp` files into an executable (you might need to adjust compiler flags depending on your system):
        ```bash
        g++ main.cpp calculator.cpp temperature.cpp length.cpp storage.cpp -o converter
        ```
3.  **Run the executable:**
    * Execute the compiled program using the following command:
        ```bash
        ./converter
        ```
        (On Windows, you might need to run `converter.exe`)
4.  **Follow the on-screen instructions:**
    * The program will first present you with a menu of options:
        ```
        Choose an option:
        1. Use Calculator
        2. Use Temperature Converter
        3. Use Length Converter
        4. Use Storage Converter
        Enter your choice (1, 2, 3, or 4):
        ```
    * **Enter the number corresponding to the tool you want to use and press Enter.**
#### 4.1. Using the Calculator (Option 1)

1.  If you choose `1`, you will be prompted to:
    ```
    Calculator Mode:
    Enter the first number:
    ```
    Enter the first number and press Enter.
2.  You will then be asked for the second number:
    ```
    Enter the second number:
    ```
    Enter the second number and press Enter.
3.  Finally, you will be asked to enter the operation:
    ```
    Enter an operation (+, -, *, /):
    ```
    Enter the symbol for the desired operation (+ for addition, - for subtraction, \* for multiplication, / for division) and press Enter.
4.  The program will then display the result of the calculation.
#### 4.2. Using the Temperature Converter (Option 2)
1.  If you choose `2`, you will see the temperature conversion menu:
    ```
    Temperature Converter Mode:
    Choose conversion:
    1. Celsius to Fahrenheit
    2. Fahrenheit to Celsius
    Enter your choice (1 or 2):
    ```
    Enter `1` or `2` and press Enter.
2.  If you choose `1` (Celsius to Fahrenheit), you will be prompted to:
    ```
    Enter temperature in Celsius:
    ```
    Enter the temperature in Celsius and press Enter. The program will display the equivalent temperature in Fahrenheit.
3.  If you choose `2` (Fahrenheit to Celsius), you will be prompted to:
    ```
    Enter temperature in Fahrenheit:
    ```
    Enter the temperature in Fahrenheit and press Enter. The program will display the equivalent temperature in Celsius.

#### 4.3. Using the Length Converter (Option 3)
1.  If you choose `3`, you will see the length conversion menu:
    ```
    Length Converter Mode:
    Choose conversion:
    1. Meters to Feet
    2. Feet to Meters
    3. Kilometers to Miles
    4. Miles to Kilometers
    Enter your choice (1, 2, 3, or 4):
    ```
    Enter the number corresponding to your desired conversion and press Enter.
2.  You will then be prompted to enter the length in the original unit. Enter the value and press Enter.
3.  The program will display the converted length in the target unit.

#### 4.4. Using the Storage Converter (Option 4)
1.  If you choose `4`, you will be guided through the storage conversion process:
    ```
    Storage Converter Mode:
    Enter the storage value:
    ```
    Enter the numerical value of the storage size and press Enter.
2.  You will then be asked for the original unit:
    ```
    Enter the original unit (GB, MB, KB, B):
    ```
    Enter the abbreviation for the original unit (GB for Gigabytes, MB for Megabytes, KB for Kilobytes, B for Bytes) and press Enter. **Note:** Ensure you enter the unit in uppercase as shown.
3.  Finally, you will be asked for the target unit:
    ```
    Enter the target unit (GB, MB, KB, B):
    ```
    Enter the abbreviation for the desired target unit (GB, MB, KB, B) in uppercase and press Enter.
4.  The program will display the converted storage value in the target unit.

### Contributing to the Project
If you are interested in contributing to this project, please refer to the `CONTRIBUTING.md` file (if it exists in the repository) for guidelines on how to submit bug reports, suggest new features, or contribute code.

### License
This project is likely licensed under an open-source license. Please refer to the `LICENSE` file in the repository for more information about the terms and conditions of use and distribution.
Thank you for using the Multi-Utility Converter project! If you encounter any issues or have suggestions, please feel free to open an issue on the GitHub repository.
