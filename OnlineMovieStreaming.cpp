#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

class Movie
{
private:
    std::string title;
    std::string genre;
    double duration; // Duration in minutes

public:
    Movie(std::string t, std::string g, double d)
        : title(t), genre(g), duration(d) {}

    void displayInfo() const
    {
        std::cout << "Title: " << title << "\n"
                  << "Genre: " << genre << "\n"
                  << "Duration: " << duration << " minutes\n";
    }

    std::string getTitle() const
    {
        return title;
    }
};

class StreamingService
{
private:
    std::vector<Movie> movies;

public:
    void addMovie(const Movie &movie)
    {
        movies.push_back(movie);
        std::cout << "Movie added successfully!\n";
    }
