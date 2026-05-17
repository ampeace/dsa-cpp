#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist {
    string table[1000];

public:
    int h1(string id) {
        int hash = 0;
        for(char c : id)
            hash += c;
        return hash % 1000;
    }

    int h2(string id) {
        int hash = 0;
        for(char c : id)
            hash += c;
        return 1 + (hash % 997);
    }

    void insert(string id) {
        int index = h1(id);
        int step = h2(id);

        int i = 0;
        while(table[(index + i * step) % 1000] != "") {
            i++;
        }

        table[(index + i * step) % 1000] = id;
    }

    void display() {
        for(int i = 0; i < 1000; i++) {
            if(table[i] != "") {
                cout << i << " -> " << table[i] << endl;
            }
        }
    }
};

int main() {
    MusicPlaylist mp;
    int n;
    string id;

    cout << "Enter number of songs: ";
    cin >> n;

    cout << "Enter 4-character song IDs:\n";

    for(int i = 0; i < n; i++) {
        cin >> id;
        mp.insert(id);
    }

    cout << "\nIndexed Songs:\n";
    mp.display();

    return 0;
}