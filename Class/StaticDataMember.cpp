#include <iostream>
using namespace std;
// Static data members
class Player
{
	private:
		static int playerCount;
	public:
		Player()
		{
			playerCount++;
		}
		static void display()
		{
			cout << playerCount << endl;
		}
		~Player()
		{
			playerCount--;
		}
};
int Player::playerCount =0;
int main() {
	Player p1;
	{
		Player p2;
		Player::display();
	}
	Player::display();
	return 0;
}