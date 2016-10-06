// 7_2 Заявка на переговоры
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Структура для записи отрезка
struct Segment {
    Segment(int st, int ed):start(st), end(ed){};
    int start;
    int end;
    bool operator<( const Segment &rhs) const {return end < rhs.end;}
};

int FindAnswer(vector<Segment> &mas) {
    int count = 1; //т.к 1 случай всегда можно удовлетворить
    int j = 0;
    for (int i = 1; i < mas.size(); i++) {
        if (mas[i].start >= mas[j].end) {// если начало нового 
        //отрезка больше или равно предыдущего
            count++;
            j = i;
        }
    }
    return count;
}
int main(){
    int start = 0, end = 0;
    vector<Segment> mas; ;
    while (cin >> start >> end) {
        Segment temp(start, end);
        mas.push_back(temp);
    }
    //Сортируем по концу отрезка
    sort(mas.begin(), mas.end());
    
    cout << FindAnswer(mas);
    return 0;
}