#include <gtkmm.h>
#include <iostream>
#include <string>

#define WIDTH 1200
#define HEIGHT 800

using std::cout;
using std::endl;
using Glib::ustring;

void clicked() {
    cout << "Hello, world!" << endl;
}

int main(int argc, char *argv[]) {
    Gtk::Main app(argc, argv);

    Gtk::Window win;
    win.set_title("Hello, GTK!");
    win.set_resizable(false);
    win.set_default_size(WIDTH, HEIGHT);

    // init
    Gtk::Box box;
    Gtk::Button b1("Hello");
    Gtk::Button b2("Goodbye");

    // conf
    b1.signal_clicked().connect(sigc::ptr_fun(&clicked));
    box.pack_start(b1);
    box.pack_end(b2);

    // add
    box.add(b1);
    box.add(b2);
    win.add(box);
    win.show_all_children();

    app.run(win);
    return 0;
}
