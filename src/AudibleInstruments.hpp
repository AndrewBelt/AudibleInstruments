#include "rack.hpp"


using namespace rack;


extern Plugin *plugin;

////////////////////
// module widgets
////////////////////

struct BraidsWidget : ModuleWidget {
	BraidsWidget();
	Menu *createContextMenu() override;
};

struct ElementsWidget : ModuleWidget {
	ElementsWidget();
	Menu *createContextMenu() override;
};

struct TidesWidget : ModuleWidget {
	Panel *tidesPanel;
	Panel *sheepPanel;
	TidesWidget();
	void step() override;
	Menu *createContextMenu() override;
};

struct StreamsWidget : ModuleWidget {
	StreamsWidget();
};

struct CloudsWidget : ModuleWidget {
	ParamWidget *blendParam;
	ParamWidget *spreadParam;
	ParamWidget *feedbackParam;
	ParamWidget *reverbParam;
	CloudsWidget();
	void step() override;
	Menu *createContextMenu() override;
};

struct WarpsWidget : ModuleWidget {
	WarpsWidget();
};

struct RingsWidget : ModuleWidget {
	RingsWidget();
	Menu *createContextMenu() override;
};

struct LinksWidget : ModuleWidget {
	LinksWidget();
};

struct KinksWidget : ModuleWidget {
	KinksWidget();
};

struct ShadesWidget : ModuleWidget {
	ShadesWidget();
};

struct BranchesWidget : ModuleWidget {
	BranchesWidget();
	Menu *createContextMenu() override;
};

struct BlindsWidget : ModuleWidget {
	BlindsWidget();
};

struct VeilsWidget : ModuleWidget {
	VeilsWidget();
};

struct FramesWidget : ModuleWidget {
	FramesWidget();
	Menu *createContextMenu() override;
};

struct PeaksWidget : ModuleWidget {
	PeaksWidget();
	Menu *createContextMenu() override;
};
