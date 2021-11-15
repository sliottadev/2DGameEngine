
#include <iostream>
#include "allegro5/allegro.h"
#include "allegro5/allegro_native_dialog.h"

int main()
{
    if (!al_init()) {
       // al_show_native_message_box(NULL, NULL, NULL, "No se pudo Inicializar Allegro 6", NULL, NULL);
        return -1;
    }
    ALLEGRO_DISPLAY* display;
    al_set_new_display_flags(ALLEGRO_OPENGL);
    display = al_create_display(800, 600);

    al_set_window_title(display, "TETRIS ACPP");
    //std::cout << "Hello World!\n";
}
