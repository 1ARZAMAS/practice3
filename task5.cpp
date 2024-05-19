/*Магазин фруктов и магазин овощей решили объединить свой бизнес. 
Для этого им нужна новая общая база товаров. 
Даны два вектора с наименованиями, следует вывести один 
общий, отсортированный вектор.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    system("chcp 65001");
    vector<string> fruits = {"Абрикос", "Банан", "Ананас", "Вишня", "Инжир", "Груша"};
    vector<string> vegetables = {"Морковь", "Редис", "Перец", "Баклажан", "Кабачок"};

    vector<string> merged(fruits.size() + vegetables.size());
    merge(fruits.begin(), fruits.end(), vegetables.begin(), vegetables.end(), merged.begin());
    sort(merged.begin(), merged.end());
    cout << "Объединенный и отсортированный список: " << endl;
    for (const auto& item : merged){
        cout << item << " ";
    }
}