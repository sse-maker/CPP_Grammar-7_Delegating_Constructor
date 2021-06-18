//
//  main.cpp
//  7_Delegating_Constructor
//
//  Created by 세광 on 2021/06/18.
//

#include <iostream>

using namespace std;

// 생성자 위임: 특정한 생성자에서 자기 class 내에 다른 생성자를 호출할 수 있는 기능
class Time {
public:
    Time() : h(0), m(0), s(0) { }
    Time(int s_) : Time() { s = s_; }
    Time(int m_, int s_) : Time(s_) { m = m_; }
    Time(int h_, int m_, int s_) : Time(m_, s_) { h = h_; }
    
    void SetHour(int h_) { h = h_; }
    void SetMinute(int m_) { m = m_; }
    void SetSecond(int s_) { s = s_; }
    int GetHour() { return h; }
    int GetMinute() { return m; }
    int GetSecond() { return s; }
    
private:
    int h, m, s;
};

int main() {
    Time t1;
    Time t2(5);
    Time t3(3, 16);
    Time t4(2, 42, 15);
    
    cout << t1.GetHour() << " : " << t1.GetMinute() << " : " << t1.GetSecond() << endl;
    cout << t2.GetHour() << " : " << t2.GetMinute() << " : " << t2.GetSecond() << endl;
    cout << t3.GetHour() << " : " << t3.GetMinute() << " : " << t3.GetSecond() << endl;
    cout << t4.GetHour() << " : " << t4.GetMinute() << " : " << t4.GetSecond() << endl;
}
