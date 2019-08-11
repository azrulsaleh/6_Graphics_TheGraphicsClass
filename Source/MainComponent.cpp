/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll (Colours::lightblue);

    Font mainComponentFont ("Times New Roman", 20.0f, Font::bold | Font::italic);
    g.setFont (mainComponentFont);
    g.setColour (Colours::darkblue);
    g.drawText("Hello, World!", 20, 40, 200, 40, Justification::centred, true);
    
    g. setColour(Colours::green);
    g.drawLine(10, 300, 590, 300, 5);
        //Draw arrow lines
            //Line<float>line(10, 300, 490, 300);
            //g.drawArrow(line, 5, 20, 20);
        //Draw dashed lines
            //Line<float>line(10, 300, 490, 300);
            //const float dashLength[] = {5, 5, 10, 10};
            //g.drawDashedLine(line, &dashLength[0], 4, 6.0f, 0);

    g.setColour(Colours::sandybrown);
    Rectangle<float>house (300, 120, 200, 170);
    g.fillCheckerBoard(house, 30, 10, Colours::sandybrown, Colours::saddlebrown);
        //Draw rectangle
            //g.fillRect(house);
        //Draw rounded rectangle
            //Rectangle<float>house (300, 120, 200, 170);
            //g.drawRoundedRectangle(house, 50, 20);
        //Draw filled rounded rectangle
            //Rectangle<float>house (300, 120, 200, 170);
            //g.fillRoundedRectangle(house, 50);
    
    g.setColour(Colours::yellow);
    g.drawEllipse (getWidth() - 70, 10, 60, 60, 3);
        //Fixed pixel placement
            //g.drawEllipse(530, 10, 60, 60, 3);
        //Draw ellipse with center at point
            //drawEllipseWithCenterAtPoint(g, 0, 0, 100, 100, 10);
    
    g.setColour(Colours::red);
    Path roof;
    roof.addTriangle(300, 110, 500, 110, 400, 70);
    g.fillPath(roof);
}

void MainComponent::resized()
{
    
}

void MainComponent::drawEllipseWithCenterAtPoint(Graphics& g, int x, int y, int w, int h, int t)
{
    g.drawEllipse(x - (w / 2), y - (h / 2), w, h, t);
}
