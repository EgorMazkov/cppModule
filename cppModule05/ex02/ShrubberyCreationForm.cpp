#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():	Form("Default ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &S):	Form(S.getName(), 145, 137)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &S)
{
	if (this == &S)
		return (*this);
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):	Form(target, 145, 137)
{
}

void ShrubberyCreationForm::action() const
{
	if (!getCheckSignature())
	{
		std::cout << "action on " << getName() << " cannot be done, because form is not signed" << std::endl;
		return ;
	}
	std::ofstream OFS((getName() + "_shrubbery").c_str(), std::ios::out | std::ios::trunc | std::ios::binary);
	if (!OFS.fail())
	{
		OFS <<
                "___________{{{{{{_{{{{{{{{"
                "__________{_____{{________{ " <<
                "________{{{_______________ {{{{{{{ " <<
                "________{_______________________{{{ " <<
                "_______ {{____{__________________ { " <<
                "______{{{____{{{{{{{{{____________{{{ " <<
                "______{{______{{{{{_______ {{_______{{_{{ " <<
                "_____{{{{{{_______________{{__{_{{___{{{{{{ " <<
                "___{{{__{{{{__{{{_________{{{{{{{____{{___{{{ " <<
                "___{______{{{_{_{__{__{_{{{________________{{{ " <<
                "__ {________{_{_{{{{{{{{{{_{{________________{{ " <<
                "___{{____{{{{_{_{{{_{{{{_{_{{{{{{{{{{________{{ " <<
                "__{{{{___{{{{{{{{___{{{_{__{{{____{{{{______{{{ " <<
                "_{{{_{{{{{_{{{{{{_{{_{{{____{{{{{{{{________{{{ " <<
                "{{_____{{{__{{_{{{{{__{{___{{{{{{_{_____{{{___{{ " <<
                "{_____{{{___{_{_{{{___{{_{{__{__{{{{{__{{{_____{{ " <<
                "{{___{{{{{{_{{{___{____{{{__{{{{{{{{{{{{{{{{____{ " <<
                "_{{__{{{{{{{{{{{{_{{{__{{__{{{{{{{__{{{{__{____{{{ " <<
                "__ {{{{_____{_{{{______{{___{{_____{{{_________{ " <<
                "____________{{{__{{_____{___{{{_{{{{{{{{{{{___{{ " <<
                "___{{{{{{{{{{{{{{{{{_{{_{{_{{{{{{{{{{{{{{{{{{{{{ " <<
                "__ {_____{{{{{___{{{_{{__{{{{___{{{________{{{ " <<
                "__ {{____{{_______{{_{{___{{{{_{{{{{_____{{{ " <<
                "__ {_____{___{_{{{_{_{{___{{_{{{__{{{____{{ " <<
                "__ {{_______{{{{__{{______ {________{{{{{{ " <<
                "___{__{{{{{{{_____{___{{{__{__________{{{ " <<
                "___{{{{{{{{{_____{{__{{{{{_{{ " <<
                "________________{{___{{{{___{{ " <<
                "_______________{{____{{{{___{{ " <<
                "____________{{{{_____{{_____{{ " <<
                "___________ {{_______{{_____{{ " <<
                "__________{{{___{{___{{_____{{ " <<
                "________{{{{____{{___{______{{ " <<
                "______ {{{{{____{______{{____{{ " <<
                "_____{{{{{{{{_{{{_{____{{_{___{{ " <<
                "___{{{{{{{{{{{K{{{{{{{{{{{{{{{{{{{ " <<
                "__ {{{{{{{{{{{{{{_{{{{{{____{{{{{_{{{ " << std::endl;
	}
	else
	{
		std::cout << "action on " << getName() << " cannot be done" << std::endl;
	}
	OFS.close();
}