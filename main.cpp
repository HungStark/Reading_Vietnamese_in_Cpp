#pragma warning(disable : 4996)
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <fstream>
#include <string>
#include <codecvt>
#include <vector>
#include <iomanip>
using namespace std;

wchar_t upcase(const wchar_t &k) {
    switch (k){
        case L'a':
        case L'A':
            return L'A';
        case L'á':
        case L'Á':
            return L'Á';
        case L'ả':
        case L'Ả':
            return L'Ả';
        case L'à':
        case L'À':
            return L'À';
        case L'ã':
        case L'Ã':
            return L'Ã';
        case L'ạ':
        case L'Ạ':
            return L'Ạ';
        case L'ă':
        case L'Ă':
            return L'Ă';
        case L'ắ':
        case L'Ắ':
            return L'Ắ';
        case L'ẳ':
        case L'Ẳ':
            return L'Ẳ';
        case L'ằ':
        case L'Ằ':
            return L'Ằ';
        case L'ẵ':
        case L'Ẵ':
            return L'Ẵ';
        case L'Ặ':
        case L'ặ':
            return L'Ặ';
        case L'â':
        case L'Â':
            return L'Â';
        case L'Ấ':
        case L'ấ':
            return L'Ấ';
        case L'ẩ':
        case L'Ẩ':
            return L'Ẩ';
        case L'ầ':
        case L'Ầ':
            return L'Ầ';
        case L'ẫ':
        case L'Ẫ':
            return L'Ẫ';
        case L'ậ':
        case L'Ậ':
            return L'Ậ';
        case L'b':
        case L'B':
            return L'B';
        case L'c':
        case L'C':
            return L'C';
        case L'd':
        case L'D':
            return L'D';
        case L'đ':
        case L'Đ':
            return L'Đ';
        case L'e':
        case L'E':
            return L'E';
        case L'é':
        case L'É':
            return L'É';
        case L'ẻ':
        case L'Ẻ':
            return L'Ẻ';
        case L'è':
        case L'È':
            return L'È';
        case L'ẽ':
        case L'Ẽ':
            return L'Ẽ';
        case L'ẹ':
        case L'Ẹ':
            return L'Ẹ';
        case L'ê':
        case L'Ê':
            return L'Ê';
        case L'ế':
        case L'Ế':
            return L'Ế';
        case L'ể':
        case L'Ể':
            return L'Ể';
        case L'ề':
        case L'Ề':
            return L'Ề';
        case L'ễ':
        case L'Ễ':
            return L'Ễ';
        case L'ệ':
        case L'Ệ':
            return L'Ệ';
        case L'g':
        case L'G':
            return L'G';
        case L'h':
        case L'H':
            return L'H';
        case L'i':
        case L'I':
            return L'I';
        case L'í':
        case L'Í':
            return L'Í';
        case L'ỉ':
        case L'Ỉ':
            return L'Ỉ';
        case L'ì':
        case L'Ì':
            return L'Ì';
        case L'ĩ':
        case L'Ĩ':
            return L'Ĩ';
        case L'ị':
        case L'Ị':
            return L'Ị';
        case L'k':
        case L'K':
            return L'K';
        case L'l':
        case L'L':
            return L'L';
        case L'm':
        case L'M':
            return L'M';
        case L'n':
        case L'N':
            return L'N';
        case L'o':
        case L'O':
            return L'O';
        case L'ó':
        case L'Ó':
            return L'Ó';
        case L'ỏ':
        case L'Ỏ':
            return L'Ỏ';
        case L'ò':
        case L'Ò':
            return L'Ò';
        case L'õ':
        case L'Õ':
            return L'Õ';
        case L'ọ':
        case L'Ọ':
            return L'Ọ';
        case L'ô':
        case L'Ô':
            return L'Ô';
        case L'ố':
        case L'Ố':
            return L'Ố';
        case L'ổ':
        case L'Ổ':
            return L'Ổ';
        case L'ồ':
        case L'Ồ':
            return L'Ồ';
        case L'ỗ':
        case L'Ỗ':
            return L'Ỗ';
        case L'ộ':
        case L'Ộ':
            return L'Ộ';
        case L'ơ':
        case L'Ơ':
            return L'Ơ';
        case L'ớ':
        case L'Ớ':
            return L'Ớ';
        case L'Ở':
        case L'ở':
            return L'Ở';
        case L'Ờ':
        case L'ờ':
            return L'Ờ';
        case L'Ỡ':
        case L'ỡ':
            return L'Ỡ';
        case L'ợ':
        case L'Ợ':
            return L'Ợ';
        case L'p':
        case L'P':
            return L'P';
        case L'q':
        case L'Q':
            return L'Q';
        case L'r':
        case L'R':
            return L'R';
        case L'S':
        case L's':
            return L'S';
        case L't':
        case L'T':
            return L'T';
        case L'u':
        case L'U':
            return L'U';
        case L'ú':
        case L'Ú':
            return L'Ú';
        case L'ủ':
        case L'Ủ':
            return L'Ủ';
        case L'ù':
        case L'Ù':
            return L'Ù';
        case L'ũ':
        case L'Ũ':
            return L'Ũ';
        case L'ụ':
        case L'Ụ':
            return L'Ụ';
        case L'Ư':
        case L'ư':
            return L'Ư';
        case L'ứ':
        case L'Ứ':
            return L'Ứ';
        case L'ử':
        case L'Ử':
            return L'Ử';
        case L'ừ':
        case L'Ừ':
            return L'Ừ';
        case L'ữ':
        case L'Ữ':
            return L'Ữ';
        case L'ự':
        case L'Ự':
            return L'Ự';
        case L'v':
        case L'V':
            return L'V';
        case L'X':
        case L'x':
            return L'X';
        case L'y':
        case L'Y':
            return L'Y';
        case L'ý':
        case L'Ý':
            return L'Ý';
        case L'ỷ':
        case L'Ỷ':
            return L'Ỷ';
        case L'ỳ':
        case L'Ỳ':
            return L'Ỳ';
        case L'Ỹ':
        case L'ỹ':
            return L'Ỹ';
    };
    return L' ';
 }

int HF(const wchar_t &k) {
    switch (k){
        case L'A': return 1;
        case L'Á': return 2;
        case L'Ả': return 3;
        case L'À': return 4;
        case L'Ã': return 5;
        case L'Ạ': return 6;
        case L'Ă': return 7;
        case L'Ắ': return 8;
        case L'Ẳ': return 9;
        case L'Ằ': return 10;
        case L'Ẵ': return 11;
        case L'Ặ': return 12;
        case L'Â': return 13;
        case L'Ấ': return 14;
        case L'Ẩ': return 15;
        case L'Ầ': return 16;
        case L'Ẫ': return 17;
        case L'Ậ': return 18;
        case L'B': return 19;
        case L'C': return 20;
        case L'D': return 21;
        case L'Đ': return 22;
        case L'E': return 23;
        case L'É': return 24;
        case L'Ẻ': return 25;
        case L'È': return 26;
        case L'Ẽ': return 27;
        case L'Ẹ': return 28;
        case L'Ê': return 29;
        case L'Ế': return 30;
        case L'Ể': return 31;
        case L'Ề': return 32;
        case L'Ễ': return 33;
        case L'Ệ': return 34;
        case L'G': return 35;
        case L'H': return 36;
        case L'I': return 37;
        case L'Í': return 38;
        case L'Ỉ': return 39;
        case L'Ì': return 40;
        case L'Ĩ': return 41;
        case L'Ị': return 42;
        case L'K': return 43;
        case L'L': return 44;
        case L'M': return 45;
        case L'N': return 46;
        case L'O': return 47;
        case L'Ó': return 48;
        case L'Ỏ': return 49;
        case L'Ò': return 50;
        case L'Õ': return 51;
        case L'Ọ': return 52;
        case L'Ô': return 53;
        case L'Ố': return 54;
        case L'Ổ': return 55;
        case L'Ồ': return 56;
        case L'Ỗ': return 57;
        case L'Ộ': return 58;
        case L'Ơ': return 59;
        case L'Ớ': return 60;
        case L'Ở': return 61;
        case L'Ờ': return 62;
        case L'Ỡ': return 63;
        case L'Ợ': return 64;
        case L'P': return 65;
        case L'Q': return 66;
        case L'R': return 67;
        case L'S': return 68;
        case L'T': return 69;
        case L'U': return 70;
        case L'Ú': return 71;
        case L'Ủ': return 72;
        case L'Ù': return 73;
        case L'Ũ': return 74;
        case L'Ụ': return 75;
        case L'Ư': return 76;
        case L'Ứ': return 77;
        case L'Ử': return 78;
        case L'Ừ': return 79;
        case L'Ữ': return 80;
        case L'Ự': return 81;
        case L'V': return 82;
        case L'X': return 83;
        case L'Y': return 84;
        case L'Ý': return 85;
        case L'Ỷ': return 86;
        case L'Ỳ': return 87;
        case L'Ỹ': return 88;
    };
    return 0;
}

struct NODE {
    wstring key;
    NODE* next;
};

typedef NODE *NODEPTR;
NODEPTR HASHTABLE[90];

void InitHASHTABLE() {
    for (int i = 1; i < 89; i++)
        HASHTABLE[i] = NULL;
}

void AddTail(NODE *&l, wstring k)
{
    NODE *newNode = new NODE{k, NULL};
    if (l == NULL)
    {
        l = newNode;
    }
    else
    {
        NODE* p = l;
        while (p != NULL && p->next != NULL)
            p = p->next;
        p->next = newNode;
    }
}

void Insert(wstring k) {
    int i = HF(k[0]);
    AddTail(HASHTABLE[i], k);
}

NODEPTR Search(wstring k){
    int i = HF(k[0]);
    NODEPTR p = HASHTABLE[i];
    while (p != NULL  && k != p->key)
        p = p->next;
    return p;
}

void DeleteHead(NODE *&l)
{
    if (l != NULL)
    {
        NODE *p = l;
        l = l->next;
        delete p;
    }
}
void DeleteAfter(NODE *&q)
{
    NODE *p = q->next;
    if (p != NULL)
    {
        q->next = p->next;
        delete p;
    }
}

void Remove(wstring k) {
    NODEPTR Q, p;
    int i = HF(k[0]);
    p = HASHTABLE[i];
    Q = p;
    while (p != NULL &&  p->key != k) {
        Q = p;
        p = p->next;
    }
    if (p == HASHTABLE[i])
        DeleteHead(HASHTABLE[i]);
    else
        DeleteAfter(Q);
}


int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    locale loc(std::locale(), new std::codecvt_utf8<wchar_t>);  // UTF-8
    int d = 0;
    //read file A
    wifstream fin(L"A.txt");
    if (!fin) {
        wcout << L"Không thể đọc file A\n";
    }
    else {
        wstring temp;
        fin.imbue(loc);
        while (fin >> temp) {
            Insert(temp);
        }
        fin.close();
    }
    //read file B
    vector<wstring> vb ;
    wifstream finb(L"B.txt");
    if (!finb) {
        wcout << L"Không thể đọc file B\n";
    }
    else {
        finb.imbue(loc);
        wstring vbtemp;
        while (finb >> vbtemp) {
            for (int i = 0; i < vbtemp.length(); i++) {
                vbtemp[i] = upcase(vbtemp[i]);
            }
            while (HF(vbtemp[vbtemp.length()-1]) == 0) vbtemp.pop_back();
            vb.push_back(vbtemp);
        }
        for (int i = 0; i < vb.size(); i++) {
            int x = HF(vb[i][0]);
            if (Search(vb[i]) != NULL) {
                Remove(vb[i]);
                d++;
            }
        }
    }
    wcout << L"a. Số tiếng Việt xuất hiện trong file B =  " << d << endl;
    wcout << L"b. Tỷ lệ =  " <<  setprecision(3) << float(d)/70;
    return 0;
}

