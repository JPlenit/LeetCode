
class BrowserHistory {
private: 
    stack<string> page;
    stack<string> infrent;
public:
    BrowserHistory(string homepage) {
        page.push(homepage);
    }
    
    void visit(string url) {
        while (!infrent.empty()) infrent.pop();
        page.push(url);
    }
    
    string back(int steps) {
        int num = page.size() > steps ? steps : page.size() - 1;
        string str;
        for (int i = 0; i < num; i++) {
            str = page.top();
            page.pop();
            infrent.push(str);
        }
        return page.top();
    }
    
    string forward(int steps) {
        int num = infrent.size() > steps ? steps : infrent.size();
        string str;
        for (int i = 0; i < num; i++) {
            str = infrent.top();
            infrent.pop();
            page.push(str);
        }
        return page.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */