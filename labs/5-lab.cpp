#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel
{
    //question a
    private:
        string Name;
        string OwnerName;
        static int SubscriberCount;
        list<string> PublishedVideoTitles;

    public:
        YoutubeChannel();
        // question 2a
        void Subscribe()
        {
            SubscriberCount++;
        }
        // question 2b
        void Unsubscribe()
        {
            if (SubscriberCount != 0)
                SubscriberCount--;
        }
        // question 2c
        void getName()
        {
            cout << "Name: " << Name;
        }
        // question 2d
        void setName(string name)
        {
            Name = name;
        }
        // question 2e
        void PublishVideo();

        YoutubeChannel(string name, string ownerName)
        {
            Name = name;
            OwnerName = ownerName;
        }

        void GetInfo()
        {
            cout << "Name: " << Name << endl;
            cout << "Owner Name: " << OwnerName << endl;
            cout << "Number of Subscribers: " << SubscriberCount <<endl;
        }
};

int YoutubeChannel::SubscriberCount = 0;

int main()
{
    YoutubeChannel ytChannel("Black Clover", "Asta");
    cout << "\n Subscribing ........ \n" << endl;
    ytChannel.Subscribe();
    ytChannel.GetInfo();

    cout << "\n Unsubscribing ........ \n" << endl;
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();

    cout << "\n Adding 20 subscribers ........ \n" << endl;
    for (int i=0; i < 20; i++)
    {
        ytChannel.Subscribe();
    }
    ytChannel.GetInfo();

    return 0;
}

