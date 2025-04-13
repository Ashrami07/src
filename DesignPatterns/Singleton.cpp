#include <iostream>
using namespace std;
// singleton design pattern
class Config
{
	private:
	static Config* instance;
	
	public:
	static Config* getInstance()
	{
	if (!instance){
		instance = new Config();
		cout << "new instance created" << endl;
	}	
	return instance;
	}
};

Config* Config::instance = nullptr;
int main() {
	
	return 0;
}