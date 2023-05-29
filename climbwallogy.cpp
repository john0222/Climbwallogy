#include <iostream>
#include <vector>
#include <map>
#include <windows.h>
// 函數用於獲取用戶的選擇
int getUserChoice(const std::vector<std::string>& options) {
    int choice;
    while (true) {
        std::cout << "Input your choice or conditions:" << std::endl;
        for (size_t i = 0; i < options.size(); i++) {
            std::cout << i + 1 << ". " << options[i] << std::endl;
        }
        std::cin >> choice;
        if (choice >= 1 && choice <= options.size()) {
            break;
        }
        system("cls");
        std::cout << "Invalid input, you motherfucker!" << std::endl;
        Sleep(2000);
        system("cls");
    }
    return choice;
}

// 函數用於計算總分
int calculateTotalScore(const std::map<int, int>& itemScores) {
    int totalScore = 0;
    for (const auto& item : itemScores) {
        totalScore += item.second;
    }
    return totalScore;
}

int main() {
    // 第一項目選項及其分數
    std::vector<std::string> firstItemOptions = {"Sunny", "Rainy but only a bit","Rainy", "Huge Rainy", "Rainy and with a fucking new guy"};
    std::map<int, float> firstItemScores = {{1, 40}, {2, 20}, {3, 5}, {4, 99.87},{5, 0}};
    int firstItemChoice = getUserChoice(firstItemOptions);
    int firstItemScore = firstItemScores[firstItemChoice];
    system("cls");
    // 第二項目選項及其分數
    std::vector<std::string> secondItemOptions = {"*New basement", "*New restroom", "*New fence", "*New asshole", "Gong Yi Kwan", "Sport field new spot", "Fake mountain", "Acitvites Center"};
    std::map<int,float> secondItemScores = {{1, 30}, {2, 10}, {3, -100}, {4, 15}, {5, 30}, {6, 25}, {7, 20}, {8, 0}};
    std::cout<<"*New means new building"<< std::endl;
    int secondItemChoice = getUserChoice(secondItemOptions);
    int secondItemScore = secondItemScores[secondItemChoice];
    system("cls");
    // 第三項目選項及其分數
    std::vector<std::string> thirdItemOptions = {"Drink with plastic bag or paper bag", "Paper cup drink", "Cumbuy/CoCo/Shang Yu Lin", "none"};
    std::map<int, float> thirdItemScores = {{1, -5}, {2, -10}, {3, -5}, {4,0}};
    int thirdItemChoice = getUserChoice(thirdItemOptions);
    int thirdItemScore = thirdItemScores[thirdItemChoice];
    system("cls");
    // 建立所有項目的分數映射
    std::map<int, int> itemScores;
    itemScores[1] = firstItemScore;
    itemScores[2] = secondItemScore;
    itemScores[3] = thirdItemScore;

    // 計算總分
    int totalScore = calculateTotalScore(itemScores);

    // 輸出結果
    std::cout << "第一項目得分：" << firstItemScore << std::endl;
    std::cout << "第二項目得分：" << secondItemScore << std::endl;
    std::cout << "第三項目得分：" << thirdItemScore << std::endl;
    std::cout << "總分：" << totalScore << std::endl;

        if (totalScore > 80){
            std::cout<<"Go with ease"<<std::endl;
        }
        else if (totalScore < 80 &&totalScore > 60){
            std::cout<<"Just go"<<std::endl;
        }
        else if (totalScore < 60 &&totalScore > 40){
            std::cout<<"Go but be careful"<<std::endl;
        }
        else if (totalScore < 40 &&totalScore > 20){
            std::cout<<"You'd better not go"<<std::endl;
        }
        else {
            std::cout<<"DON'T DO THIS"<<std::endl;
        }
       
    system("pause");
    return 0;
    }
