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
    Gtk::Main app(argc, argv);

    Win win("Hello, world!");

    // init
    //Gtk::Box box;
    //Gtk::Button b1("Hello");
    //Gtk::Button b2("Goodbye");

    //// conf
    //b1.signal_clicked().connect(sigc::ptr_fun(&clicked1));
    //b2.signal_clicked().connect(sigc::ptr_fun(&clicked2));
    //box.pack_start(b1);
    //box.pack_end(b2);

    // add
    //box.add(b1);
    //box.add(b2);
    //win.add(box);

    app.run(win);
    return 0;
}
