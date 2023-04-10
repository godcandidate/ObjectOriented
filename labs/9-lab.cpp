#include <iostream>
#include <string>
using namespace std;

class YouTubeChannel
{
	public:
		string Name;
		int SubscribersCount;

		YouTubeChannel(string name, int subscribersCount)
		{
			Name = name;
			SubscribersCount = subscribersCount;
 		}

 		friend ostream& operator<<(ostream& os, YouTubeChannel& yt)
 		{
 			os << "Name of channel : " << yt.Name << endl;
			os << "Subscribers     : "	<< yt.SubscribersCount << endl;
			return os;
		}

};
int main ()
{
	YouTubeChannel yt1 = YouTubeChannel("Grade A Under A", 3680000);
	cout << yt1;
	return 0;
}

