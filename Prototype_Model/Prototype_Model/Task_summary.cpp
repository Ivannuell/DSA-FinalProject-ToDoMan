#include "Task_summary.h"
#include <string>

void Prototype_Model::Task_summary::setTitle(String^ title)
{
	label2->Text = title;
}

void Prototype_Model::Task_summary::setDescri(String^ des)
{
	label4->Text = des;
}

void Prototype_Model::Task_summary::setStart(String^ start)
{
	label6->Text = start;
}

void Prototype_Model::Task_summary::setEnt(String^ end)
{
	label8->Text = end;
}

void Prototype_Model::Task_summary::setDif(int diff)
{
	panel1->Width = 25 * diff;
}

void Prototype_Model::Task_summary::setImportance(int imp)
{
	panel4->Width = 25 * imp;
}
