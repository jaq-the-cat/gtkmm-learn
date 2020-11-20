#include <gtkmm-3.0/gtkmm.h>

int main(int argc, char *argv[]) {
    Gtk::Main kit(argc, argv);

    Gtk::Window win;
    win.set_title("Hello, GTK!");
    Gtk::Main::run(win);
    return 0;
}
