#include<bits/bits-stdc++.h>
using namespace std;
#pragma once

class Message {
private:
    string Content;
    string Time;

public:
    Message();
    Message(string tx);
    Message(string tx, string t);

    string GetContent();
    string GetTime();
};