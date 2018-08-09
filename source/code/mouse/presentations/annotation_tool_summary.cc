#include <iostream>
#include <string>
#include "code/utilities/mouse/mouse_controller.hpp"

int main(int argc, char** argv){

    Sleep_For_N_Milliseconds(5000);
    Mouse_Controller controller;
    
    //click "Create Route"
    Point p;
    p.x = 675;
    p.y = 472;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    
    //click "Name Box"
    p.x = 809;
    p.y = 573;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    // type into "Name Box"
    controller.type_something_at_presentation_speed("loopy road");
    
    
    //click add lane button multiple times
    p.x = 735;
    p.y = 598;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(400);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(400);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(400);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(400);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(400);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(400);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(400);
    controller.presentation_click();
    
    //click marking button
    p.x = 892;
    p.y = 574;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    
    //toggle start marking
    p.x = 860;
    p.y = 812;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(700);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //toggle end marking
    p.x = 1009;
    p.y = 812;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(700);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //turn on Regeneration SLA
    p.x = 860;
    p.y = 994;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //hover over sla slider
    p.x = 1060;
    p.y = 994;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    
    //slide left
    p.x = 1034;
    p.y = 994;
    controller.drag_mouse(p,6000);
    Sleep_For_N_Milliseconds(200);
    
    //slide right
    p.x = 1112;
    p.y = 994;
    controller.drag_mouse(p,6000);
    Sleep_For_N_Milliseconds(200);
    
    //close algorithm tab
    p.x = 1112;
    p.y = 771;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //click "Settings Tab"
    p.x = 753;
    p.y = 531;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //Enable "Event Markings"
    p.x = 1162;
    p.y = 641;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //Refocus Mark Route Window
    p.x = 1058;
    p.y = 719;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //Open Marker Placement
    p.x = 1058;
    p.y = 793;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //move to marker placement slider
    p.x = 970;
    p.y = 858;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    
    //slide right
    p.x = 1070;
    p.y = 858;
    controller.drag_mouse(p,6000);
    
    //slide left
    p.x = 970;
    p.y = 858;
    controller.drag_mouse(p,6000);
    
    //slide right
    p.x = 1070;
    p.y = 858;
    controller.drag_mouse(p,6000);
    
    //slide left
    p.x = 990;
    p.y = 858;
    controller.drag_mouse(p,6000);
    Sleep_For_N_Milliseconds(200);
    
    //click label box
    p.x = 1018;
    p.y = 880;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    // type into "Label Box"
    controller.type_something_at_presentation_speed("regenerate");
    
    //click "Apply"
    p.x = 1088;
    p.y = 880;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //switch to "Annotating Over a Route"
    p.x = 946;
    p.y = 746;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    controller.presentation_click();
    Sleep_For_N_Milliseconds(200);
    
    //get to end marker
    p.x = 1061;
    p.y = 812;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    
    //extend end marker
    p.x = 1271;
    p.y = 812;
    controller.drag_mouse(p,6000);
    
    //got to start marker
    p.x = 977;
    p.y = 812;
    controller.move_mouse_at_presentation_speed(p);
    Sleep_For_N_Milliseconds(200);
    
    //extend start marker
    p.x = 1041;
    p.y = 812;
    controller.drag_mouse(p,6000);
    
    
}