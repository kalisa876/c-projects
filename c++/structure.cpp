#include <iostream>
using namespace std;

struct MovieData {
  string title;
  string director;
  int year_released;
  int running_time;
};

void showdata(MovieData);

int main() {
  MovieData movie;

  movie.title = "Lord of the rings";
  movie.director = "Spike Lee";
  movie.year_released = 1934;
  movie.running_time = 54;

  showdata(movie);

  return 0;
}

void showdata(MovieData movie) {
  cout << "The movie title is: " << movie.title << "\n";
  cout << "The director is: " << movie.director << "\n";
  cout << "The year released is: " << movie.year_released << "\n";
  cout << "The running time is: " << movie.running_time << "\n";
}
