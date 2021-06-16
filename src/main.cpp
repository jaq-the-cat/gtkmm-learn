#include <gtkmm.h>
#include <iostream>
#include <string>

#include "../headers/win.hpp"

using std::cout;
using std::endl;
using Glib::ustring;

void clicked1() {
    cout << "Hello, world!" << endl;
}

void clicked2() {
    cout << "Goodbye, world!" << endl;
}

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "app");

    auto builder = Gtk::Builder::create_from_file("glade/proj.glade");
    cout << "Got builder" << endl;

    Gtk::Window *win = nullptr;
    builder->get_widget("win", win);
    cout << "Got widget" << endl;
    app->run(*win);
    delete win;

    return 0;
}
