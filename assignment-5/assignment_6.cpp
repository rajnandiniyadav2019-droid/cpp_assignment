#include <iostream>
#include <string>
using namespace std;

// Base Class
class Artist
{
protected:
    string name;
    int rating;
    string country;

public:
    void acceptArtistData()
    {
        cout << "Enter Artist Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Rating (1-4): ";
        cin >> rating;

        cout << "Enter Country: ";
        cin >> country;
    }

    void printArtistData()
    {
        cout << "\nArtist Name : " << name;
        cout << "\nRating      : " << rating;
        cout << "\nCountry     : " << country;
    }

    bool isFamous()
    {
        return (rating == 3 || rating == 4);
    }
};

// Derived Class Painter
class Painter : public Artist
{
private:
    string type;          // decorative / commercial
    double paintingRate;
    int noOfPaintings;

public:
    void acceptPainterData()
    {
        acceptArtistData();

        cout << "Enter Painter Type (decorative/commercial): ";
        cin >> type;

        cout << "Enter Rate Per Painting: ";
        cin >> paintingRate;

        cout << "Enter Number Of Paintings: ";
        cin >> noOfPaintings;
    }

    void printPainterData()
    {
        printArtistData();

        cout << "\nPainter Type        : " << type;
        cout << "\nPainting Rate       : " << paintingRate;
        cout << "\nNumber Of Paintings : " << noOfPaintings;

        cout << "\nTotal Income        : " << calculateTotalIncome();

        if (isFamous())
            cout << "\nStatus              : Famous Artist";
        else
            cout << "\nStatus              : Not Famous";
    }

    double calculateTotalIncome()
    {
        return paintingRate * noOfPaintings;
    }
};

// Derived Class Singer
class Singer : public Artist
{
private:
    int noOfAlbums;
    double ratePerSong;
    int noOfSongs;

public:
    void acceptSingerData()
    {
        acceptArtistData();

        cout << "Enter Number Of Albums: ";
        cin >> noOfAlbums;

        cout << "Enter Rate Per Song: ";
        cin >> ratePerSong;

        cout << "Enter Number Of Songs: ";
        cin >> noOfSongs;
    }

    void printSingerData()
    {
        printArtistData();

        cout << "\nNumber Of Albums : " << noOfAlbums;
        cout << "\nRate Per Song    : " << ratePerSong;
        cout << "\nNumber Of Songs  : " << noOfSongs;

        cout << "\nTotal Income     : " << calculateTotalIncome();

        if (isFamous())
            cout << "\nStatus           : Famous Artist";
        else
            cout << "\nStatus           : Not Famous";
    }

    double calculateTotalIncome()
    {
        return ratePerSong * noOfSongs;
    }
};

int main()
{
    Painter p;
    Singer s;

    cout << "===== Enter Painter Details =====\n";
    p.acceptPainterData();

    cout << "\n===== Enter Singer Details =====\n";
    s.acceptSingerData();

    cout << "\n\n===== Painter Information =====\n";
    p.printPainterData();

    cout << "\n\n===== Singer Information =====\n";
    s.printSingerData();

    return 0;
}