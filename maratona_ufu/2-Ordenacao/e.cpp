#include<bits/stdc++.h>
using namespace std;

struct Log {
    int dia, mes, ano, hora, min, seg;
    string descricao;
};

bool comparaLogs(const Log& a, const Log& b) {
    if (a.ano != b.ano) return a.ano < b.ano;
    if (a.mes != b.mes) return a.mes < b.mes;
    if (a.dia != b.dia) return a.dia < b.dia;
    if (a.hora != b.hora) return a.hora < b.hora;
    if (a.min != b.min) return a.min < b.min;
    return a.seg < b.seg;
}

int main() {
    vector<Log> logs;

    Log log;
    while(cin>>log.dia>>log.mes>>log.ano>>log.hora>>log.min>>log.seg){
        getline(cin, log.descricao);
        logs.push_back(log);        
    }

    sort(logs.begin(), logs.end(), comparaLogs);

    for(auto &log:logs){
         cout << log.dia << "/" << log.mes << "/" << log.ano << " " << log.hora << ":" << log.min << ":" << log.seg << log.descricao << endl;
    }

    return 0;
}