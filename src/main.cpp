#include <gtkmm-3.0/gtkmm.h>

#define WIDTH 1200
#define HEIGHT 800

int main(int argc, char *argv[]) {
    Gtk::Main kit(argc, argv);

    Gtk::Window win;
    win.set_title("Hello, GTK!");
    win.set_resizable(false);
    win.set_default_size(WIDTH, HEIGHT);

    Gtk::Main::run(win);
    return 0;
}
