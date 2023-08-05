#include <iostream>

#include <fstream>

int main() {
  // Create a new file named "test.txt"
  std::ofstream outputFile("test.txt");

  if (outputFile.is_open()) {
    // Write some text into the file
    outputFile << "C++ is a high-level, general-purpose programming language created by Danish computer scientist Bjarne Stroustrup. \n";
    outputFile << "First released in 1985 as an extension of the C programming language, it has since expanded significantly over time. \n";
    outputFile << "Modern C++ currently has object-oriented, generic, and functional features, in addition to facilities for low-level memory manipulation.\n";
    outputFile << "It is almost always implemented in a compiled language.\n";
    outputFile << "Many vendors provide C++ compilers, including the Free Software Foundation, LLVM, Microsoft, Intel, Embarcadero, Oracle, and IBM.";

    // Close the file
    outputFile.close();

    std::cout << "Text has been written to the file." << std::endl;
  } else {
    std::cout << "Failed to create the file." << std::endl;
  }

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

int main() {
  // Open an existing file named "test.txt"
  std::ifstream inputFile("test.txt");

  if (inputFile.is_open()) {
    std::string line;
    while (std::getline(inputFile, line)) {
      // Display each line on the console
      std::cout << line << std::endl;
    }

    inputFile.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

int main() {
  // Open the text file
  std::ifstream inputFile("test.txt");

  if (inputFile.is_open()) {
    std::string line;
    int lineCount = 0;

    while (std::getline(inputFile, line)) {
      lineCount++;
    }

    inputFile.close();

    std::cout << "Number of lines in the file: " << lineCount << std::endl;
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }


#include <iostream>

#include <fstream>

#include <string>

#include <sstream>

int main() {
  std::ifstream inputFile("test.txt"); // Open the text file

  if (inputFile.is_open()) {
    std::string line;
    int wordCount = 0;

    while (std::getline(inputFile, line)) {
      std::stringstream ss(line);
      std::string word;

      while (ss >> word) {
        wordCount++;
      }
    }

    inputFile.close();

    std::cout << "Number of words in the said file: " << wordCount << std::endl;
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>


int main() {
  // Open the input file
  std::ifstream inputFile("test.txt");
  // Create or overwrite the output file
  std::ofstream outputFile("test_copy.txt");

  if (inputFile.is_open() && outputFile.is_open()) {
    std::string line;

    while (std::getline(inputFile, line)) {
      // Write each line to the output file
      outputFile << line << "\n";
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File copied successfully." << std::endl;
  } else {
    std::cout << "Failed to open the files." << std::endl;
  }

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

int main() {
  // Open the input file
  std::ifstream inputFile("test.txt");
  // Create or overwrite the output file
  std::ofstream outputFile("new_test.txt");

  if (inputFile.is_open() && outputFile.is_open()) {
    std::string line;
    std::string searchWord = "C++";
    std::string replaceWord = "CPP";
    std::cout << "Search word:" << searchWord << std::endl;
    std::cout << "Replace word:" << replaceWord << std::endl;
    // Display the content of the input file before find and replace
    std::cout << "\nBefore find and replace:" << std::endl;
    displayFileContent("test.txt");
    std::cout << std::endl;

    while (std::getline(inputFile, line)) {
      // Find the position of the search word in the line
      size_t pos = line.find(searchWord);
      // Repeat until all occurrences are replaced      
      while (pos != std::string::npos) {
        // Replace the search word with the replace word
        line.replace(pos, searchWord.length(), replaceWord);
        // Find the next occurrence of the search word
        pos = line.find(searchWord, pos + replaceWord.length());
      }
      // Write the modified line to the output file
      outputFile << line << "\n";
    }

    inputFile.close();
    outputFile.close();

    // Display the content of the output file after find and replace
    std::cout << "After find and replace:" << std::endl;
    displayFileContent("new_test.txt");

    std::cout << "\nWord replaced successfully." << std::endl;
  } else {
    std::cout << "\nFailed to open the files." << std::endl;
  }

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>


// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

int main() {

  displayFileContent("new_test.txt");
  std::cout << std::endl;
  std::ofstream outputFile;
  // Open the file in append mode
  outputFile.open("new_test.txt", std::ios::app);
  displayFileContent("new_test.txt");
  std::cout << std::endl;
  if (outputFile.is_open()) {
    std::string newData;

    std::cout << "Enter the data to append: ";
    // Read the new data from the user
    std::getline(std::cin, newData);
    // Append the new data to the file
    outputFile << newData << std::endl;
    outputFile.close();
    std::cout << "Data appended successfully." << std::endl;
    displayFileContent("new_test.txt");
    std::cout << std::endl;

  } else {
    std::cout << "Failed to open the file." << std::endl;
  }

  return 0;
}

#include <iostream>

#include <fstream>

#include <vector>

#include <algorithm>

#include <iterator>

// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

int main() {
  // Open the input file
  std::ifstream inputFile("test1.txt");
  displayFileContent("test1.txt");
  // Create or overwrite the output file
  std::ofstream outputFile("sorted_test1.txt");

  if (inputFile.is_open() && outputFile.is_open()) {
    // Vector to store the lines of the file
    std::vector < std::string > lines;
    std::string line;

    // Read each line from the input file and store it in the vector
    while (std::getline(inputFile, line)) {
      lines.push_back(line);
    }

    // Sort the lines in alphabetical order
    std::sort(lines.begin(), lines.end());

    // Write the sorted lines to the output file
    std::copy(lines.begin(), lines.end(), std::ostream_iterator < std::string > (outputFile, "\n"));

    inputFile.close();
    outputFile.close();

    std::cout << "\nLines sorted successfully.\n" << std::endl;
    displayFileContent("sorted_test1.txt");
  } else {
    std::cout << "\nFailed to open the files." << std::endl;
  }

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

#include <vector>

// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

int main() {
  // List of input files
  std::vector < std::string > inputFiles = {
    "test1.txt",
    "test2.txt",
    "test3.txt",
    "test4.txt"
  };
  // Output file
  std::cout << "Content of test1.txt, test2.txt, test3.txt, text4.txt: " << std::endl;

  displayFileContent("test1.txt");
  displayFileContent("test2.txt");
  displayFileContent("test3.txt");
  displayFileContent("test4.txt");

  std::string outputFile = "merged_test_file.txt";

  // Create or overwrite the output file
  std::ofstream mergedFile(outputFile);

  if (mergedFile.is_open()) {
    for (const auto & inputFile: inputFiles) {
      // Open each input file
      std::ifstream inputFileStream(inputFile);

      if (inputFileStream.is_open()) {
        std::string line;

        // Read each line from the input file and write it to the merged file
        while (std::getline(inputFileStream, line)) {
          mergedFile << line << "\n";
        }

        inputFileStream.close();
      } else {
        std::cout << "Failed to open input file: " << inputFile << std::endl;
      }
    }

    mergedFile.close();
    std::cout << "\nFiles merged successfully." << std::endl;
    std::cout << "\nContent of the merged file:" << std::endl;
    displayFileContent("merged_test_file.txt");
  } else {
    std::cout << "Failed to open the output file." << std::endl;
  }

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

#include <vector>

void splitFile(const std::string & inputFile,
  const std::string & outputPrefix, int chunkSize) {
  // Open the input file in binary mode
  std::ifstream input(inputFile, std::ios::binary);

  if (input.is_open()) {
    // Get the file size
    input.seekg(0, std::ios::end);
    std::streampos fileSize = input.tellg();
    input.seekg(0, std::ios::beg);

    // Calculate the number of chunks
    int numChunks = (fileSize + chunkSize - 1) / chunkSize;

    // Read and write each chunk
    for (int i = 0; i < numChunks; ++i) {
      // Create or overwrite the output file
      std::ofstream output(outputPrefix + std::to_string(i + 1) + ".txt", std::ios::binary);

      if (output.is_open()) {
        std::vector < char > buffer(chunkSize);

        // Read a chunk of data from the input file
        input.read(buffer.data(), chunkSize);

        // Write the chunk to the output file
        output.write(buffer.data(), input.gcount());

        output.close();
      } else {
        std::cout << "Failed to open output file: " << outputPrefix + std::to_string(i + 1) + ".txt" << std::endl;
      }
    }

    input.close();

    std::cout << "File split successfully." << std::endl;
  } else {
    std::cout << "Failed to open the input file." << std::endl;
  }
}

int main() {
  // Input file
  std::string inputFile = "merged_test_file.txt";
  // Prefix for output files
  std::string outputPrefix = "part_";
  int chunkSize = 400; // Chunk size in bytes
  splitFile(inputFile, outputPrefix, chunkSize);
  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

#include <vector>

// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

void searchAndDisplayLineNumbers(const std::string & filename,
  const std::string & searchStr) {
  std::ifstream file(filename);
  std::string line;
  std::vector < int > lineNumbers;

  int lineNumber = 1;

  while (std::getline(file, line)) {
    if (line.find(searchStr) != std::string::npos) {
      lineNumbers.push_back(lineNumber);
    }

    lineNumber++;
  }

  file.close();

  if (!lineNumbers.empty()) {
    std::cout << "String \"" << searchStr << "\" found at line number(s): ";

    for (int i = 0; i < lineNumbers.size(); ++i) {
      std::cout << lineNumbers[i];

      if (i != lineNumbers.size() - 1) {
        std::cout << ", ";
      }
    }

    std::cout << std::endl;
  } else {
    std::cout << "String \"" << searchStr << "\" not found in the file." << std::endl;
  }
}

int main() {
  // File to search
  std::string filename = "test.txt";
  displayFileContent("new_test.txt");
  std::cout << std::endl;

  // String to search
  std::string searchStr = "currently";

  searchAndDisplayLineNumbers(filename, searchStr);

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}
void encryptFile(const std::string & inputFile,
  const std::string & outputFile) {
  std::ifstream input(inputFile);
  std::ofstream output(outputFile);

  if (input.is_open() && output.is_open()) {
    char ch;
    while (input.get(ch)) {
      // Simple encryption algorithm: Increment ASCII value by 1
      ch++;

      output.put(ch);
    }

    input.close();
    output.close();

    std::cout << "File encrypted successfully.\n" << std::endl;
  } else {
    std::cout << "Failed to open the files.\n" << std::endl;
  }
}

int main() {
  // Input file
  std::string inputFile = "test.txt";
  displayFileContent("test.txt");
  std::cout << std::endl;
  // Output file
  std::string outputFile = "encrypted_test.txt";
  encryptFile(inputFile, outputFile);
  displayFileContent("encrypted_test.txt");
  std::cout << std::endl;

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

void decryptFile(const std::string & inputFile,
  const std::string & outputFile) {
  std::ifstream input(inputFile);
  std::ofstream output(outputFile);

  if (input.is_open() && output.is_open()) {
    char ch;
    while (input.get(ch)) {
      // Simple decryption algorithm: Decrement ASCII value by 1
      ch--;

      output.put(ch);
    }

    input.close();
    output.close();

    std::cout << "File decrypted successfully.\n" << std::endl;
  } else {
    std::cout << "Failed to open the files.\n" << std::endl;
  }
}

int main() {
  // Input file (encrypted)
  std::string inputFile = "encrypted_test.txt";
  displayFileContent("encrypted_test.txt");
  std::cout << std::endl;
  // Output file (decrypted)
  std::string outputFile = "decrypted_test.txt";
  decryptFile(inputFile, outputFile);
  displayFileContent("decrypted_test.txt");
  std::cout << std::endl;
  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

#include <vector>

#include <sstream>

// Function to split a string into tokens based on a delimiter
std::vector < std::string > splitString(const std::string & str, char delimiter) {
  std::vector < std::string > tokens;
  std::stringstream ss(str);
  std::string token;

  while (std::getline(ss, token, delimiter)) {
    tokens.push_back(token);
  }

  return tokens;
}

// Function to display the CSV file contents in tabular form
void displayCSVContents(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    while (std::getline(file, line)) {
      std::vector < std::string > tokens = splitString(line, ',');
      for (const std::string & token: tokens) {
        std::cout << token << "\t";
      }
      std::cout << std::endl;
    }

    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

int main() {
  std::string filename = "test.csv"; // CSV file to read

  displayCSVContents(filename);

  return 0;
}

#include <iostream>

#include <fstream>

#include <string>

// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

double calculateAverage(const std::string & filename) {
  std::ifstream file(filename);
  double sum = 0.0;
  double count = 0.0;

  if (file.is_open()) {
    double number;

    while (file >> number) {
      sum += number;
      count++;
    }

    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
    return 0.0;
  }

  if (count > 0) {
    return sum / count;
  } else {
    std::cout << "No numbers found in the file." << std::endl;
    return 0.0;
  }
}

int main() {
  std::string filename = "sample.txt"; // File containing numbers
  displayFileContent("sample.txt");
  std::cout << std::endl;
  double average = calculateAverage(filename);
  std::cout << "Average: " << average << std::endl;
  return 0;
}


