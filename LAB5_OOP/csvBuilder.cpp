#include "csvBuilder.h"
#include <fstream>

using namespace std;
void csvBuilder::build_watchlist(vector <int> watchlist, Repository& repo)
{

    ofstream fin;
    fin.open("watchlist.csv");

    fin << "#,Titel,Genre,Year,Likes,Trailer\n";

    for (int i = 0; i < watchlist.size(); i++)
    {
        Film film = repo.get_film_by_id(watchlist[i]);
        fin << i + 1 << "," << film.get_title() << "," << film.get_genre() << "," << film.get_year() << "," << film.get_number_likes() << "," << film.get_trailer() << '\n';
    }

    fin.close();

}

