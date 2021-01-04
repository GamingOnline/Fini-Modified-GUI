#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)

#ifndef CT_STATIC
	#define CT_STATIC           0
	#define CT_BUTTON           1
	#define CT_EDIT             2
	#define CT_SLIDER           3
	#define CT_COMBO            4
	#define CT_LISTBOX          5
	#define CT_TOOLBOX          6
	#define CT_CHECKBOXES       7
	#define CT_PROGRESS         8
	#define CT_HTML             9
	#define CT_STATIC_SKEW      10
	#define CT_ACTIVETEXT       11
	#define CT_TREE             12
	#define CT_STRUCTURED_TEXT  13
	#define CT_CONTEXT_MENU     14
	#define CT_CONTROLS_GROUP   15
	#define CT_SHORTCUTBUTTON   16
	#define CT_XKEYDESC         40
	#define CT_XBUTTON          41
	#define CT_XLISTBOX         42
	#define CT_XSLIDER          43
	#define CT_XCOMBO           44
	#define CT_ANIMATED_TEXTURE 45
	#define CT_OBJECT           80
	#define CT_OBJECT_ZOOM      81
	#define CT_OBJECT_CONTAINER 82
	#define CT_OBJECT_CONT_ANIM 83
	#define CT_LINEBREAK        98
	#define CT_USER             99
	#define CT_MAP              100
	#define CT_MAP_MAIN         101
	#define CT_LISTNBOX         102
	#define CT_CHECKBOX         77

		
	#define ST_POS            0x0F
	#define ST_HPOS           0x03
	#define ST_VPOS           0x0C
	#define ST_LEFT           0x00
	#define ST_RIGHT          0x01
	#define ST_CENTER         0x02
	#define ST_DOWN           0x04
	#define ST_UP             0x08
	#define ST_VCENTER        0x0C

	#define ST_TYPE           0xF0
	#define ST_SINGLE         0x00
	#define ST_MULTI          0x10
	#define ST_TITLE_BAR      0x20
	#define ST_PICTURE        0x30
	#define ST_FRAME          0x40
	#define ST_BACKGROUND     0x50
	#define ST_GROUP_BOX      0x60
	#define ST_GROUP_BOX2     0x70
	#define ST_HUD_BACKGROUND 0x80
	#define ST_TILE_PICTURE   0x90
	#define ST_WITH_RECT      0xA0
	#define ST_LINE           0xB0

	#define ST_SHADOW         0x100
	#define ST_NO_RECT        0x200
	#define ST_KEEP_ASPECT_RATIO  0x800

	#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

		
	#define SL_DIR            0x400
	#define SL_VERT           0
	#define SL_HORZ           0x400

	#define SL_TEXTURES       0x10

		
	#define ST_VERTICAL       0x01
	#define ST_HORIZONTAL     0

		
	#define LB_TEXTURES       0x10
	#define LB_MULTI          0x20

		
	#define TR_SHOWROOT       1
	#define TR_AUTOCOLLAPSE   2

		
	#define MB_BUTTON_OK      1
	#define MB_BUTTON_CANCEL  2
	#define MB_BUTTON_USER    4
#endif

#define AH_DEFAULT_FONT "PuristaSemiBold"

class AH_Data {
	version = 2;
};

class AH_Authenticate
{
	idd = 6972;
	movingEnabled = false;
	enableSimulation = true;

	 class controlsBackground {

        class background: AH_ctrlStructuredText
        {
            idc = 1000;
			font = AH_DEFAULT_FONT;
            x = 5.5 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 27 * GUI_GRID_W;
            h = 15 * GUI_GRID_H;
            colorBackground[] = {-1,-1,-1,0.6};
        };
        class header_background: AH_ctrlStructuredText
        {
            idc = 1002;
			font = AH_DEFAULT_FONT;
            x = 5.5 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 27 * GUI_GRID_W;
            h = 2.5 * GUI_GRID_H;
            colorBackground[] = {-1,-1,-1,0.5};
        };
        class header_text: AH_ctrlStructuredText
        {
            idc = 1101;
			font = AH_DEFAULT_FONT;
            text = "<t align='center' size='1.5'>Authentication Required</t>";
            x = 7 * GUI_GRID_W + GUI_GRID_X;
            y = 4.2 * GUI_GRID_H + GUI_GRID_Y;
            w = 24 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            colorBackground[] = {-1,-1,-1,0};
        };
        class main_text: AH_ctrlStructuredText
        {
            idc = 1100;
			font = AH_DEFAULT_FONT;
            text = "<t align='center'>Your account must be authenticated to play on this game server.<br/>To authenticate your account, please click the button below.</t>";
            x = 6.26 * GUI_GRID_W + GUI_GRID_X;
            y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 25.5 * GUI_GRID_W;
            h = 6 * GUI_GRID_H;
            colorBackground[] = {-1,-1,-1,0};
        };

        class footer_text: AH_ctrlStructuredText
        {
            idc = 1102;
			font = AH_DEFAULT_FONT;
            text = "<t align='center' size='0.9'>You will be redirected to an external website. You can close the website after authentication has been completed.</t>";
            x = 7 * GUI_GRID_W + GUI_GRID_X;
            y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 24 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            colorBackground[] = {-1,-1,-1,0};
        };
    };

    class controls {
        class auth_btn: AH_ctrlButton
        {
            idc = 1600;
			font = AH_DEFAULT_FONT;
            text = "Authenticate now";
            x = 7 * GUI_GRID_W + GUI_GRID_X;
            y = 14.2 * GUI_GRID_H + GUI_GRID_Y;
            w = 24 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            url = "https://fini.dev/authenticate";
        };
        class close_btn: AH_ctrlButton
        {
            idc = 1601;
			font = AH_DEFAULT_FONT;
            text = "I've authenticated!";
            x = 7 * GUI_GRID_W + GUI_GRID_X;
            y = 14.2 * GUI_GRID_H + GUI_GRID_Y;
            w = 24 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
			action = "closeDialog 0;";
        };
    };
};

class AH_ExecMenu
{
    idd=6969;
    movingEnable = 1;
    enableSimulation = 1;
    
    class controlsBackground {
		class Header: AH_ctrlStructuredText
		{
			idc = 5301;
			onLoad = "[(_this select 0)] spawn AH_AM_ManageHeaderDev;";
			font = AH_DEFAULT_FONT;
			text = "UwU";
			size = "10 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
			x=-5.31323e-005 * safeZoneW + safeZoneX;
			y=-7.50085e-005 * safeZoneH + safeZoneY;
			w=1 * safeZoneW;
			h=0.0341667 * safeZoneH;
		};
		class Border: AH_ctrlEdit
		{
			idc = 5001;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.0446 * safezoneH + safezoneY;
			w = 0.171877 * safezoneW;
			h = 0.948 * safezoneH;
			colorbackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
		};
		class Border1: Border
		{
			idc = 5002;
			x = 0.841344 * safezoneW + safezoneX;
			y = 0.0446 * safezoneH + safezoneY;
			w = 0.154248 * safezoneW;
			h = 0.732 * safezoneH;
		};
		class Border2: Border
		{
			idc = 5003;
			x = 0.180312 * safezoneW + safezoneX;
			y = 0.0446 * safezoneH + safezoneY;
			w = 0.658 * safezoneW;
			h = 0.37596 * safezoneH;
		};
    };

    class controls {
		class AH_MenuEdit: AH_ctrlEdit
		{
			idc = 1399;
			style = "0x00 + 0x0200 + 0x10";
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			font = AH_DEFAULT_FONT;

			x = 0.180312 * safezoneW + safezoneX;
			y = 0.0446 * safezoneH + safezoneY;
			w = 0.658 * safezoneW;
			h = 0.37596 * safezoneH;
			autocomplete = "scripting";
			colorText[] = {1,1,1,1};
		};
		class AH_MenuPrevious: AH_ctrlButton
		{
			idc = 1605;
			font = AH_DEFAULT_FONT;

			text = "<"; //--- ToDo: Localize;
			x = 0.180312 * safezoneW + safezoneX;
			y = 0.4494 * safezoneH + safezoneY;
			w = 0.0191146 * safezoneW;
			h = 0.0449537 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class ExecPlayer: AH_ctrlButton
		{
			idc = 1600;
			font = AH_DEFAULT_FONT;

			text = "Execute on Player"; //--- ToDo: Localize;
			x = 0.575281 * safezoneW + safezoneX;
			y = 0.4494 * safezoneH + safezoneY;
			w = 0.2625 * safezoneW;
			h = 0.0449537 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class ExecLocal: AH_ctrlButton
		{
			idc = 1601;
			font = AH_DEFAULT_FONT;

			text = "Execute (Local)"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.4494 * safezoneH + safezoneY;
			w = 0.0775639 * safezoneW;
			h = 0.0449537 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class ExecGloal: AH_ctrlButton
		{
			idc = 1602;
			font = AH_DEFAULT_FONT;

			text = "Execute (Global)"; //--- ToDo: Localize;
			x = 0.393781 * safezoneW + safezoneX;
			y = 0.4494 * safezoneH + safezoneY;
			w = 0.0781801 * safezoneW;
			h = 0.0449537 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class ExecServer: AH_ctrlButton
		{
			idc = 1603;
			font = AH_DEFAULT_FONT;

			text = "Execute (Server)"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.4494 * safezoneH + safezoneY;
			w = 0.0781801 * safezoneW;
			h = 0.0449537 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class AH_MenuNext: AH_ctrlButton
		{
			idc = 1604;
			font = AH_DEFAULT_FONT;

			text = ">"; //--- ToDo: Localize;
			x = 0.554656 * safezoneW + safezoneX;
			y = 0.4494 * safezoneH + safezoneY;
			w = 0.0188542 * safezoneW;
			h = 0.0449537 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class ExecResult: AH_ctrlEdit
		{
			idc = 1398;
			font = AH_DEFAULT_FONT;

			x = 0.180312 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.658 * safezoneW;
			h = 0.0225577 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class PlayerList: AH_ctrlListbox
		{
			idc = 1500;
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			font = AH_DEFAULT_FONT;
			colorBackground[]      = {0, 0, 0, 0.5};

			x = 0.841344 * safezoneW + safezoneX;
			y = 0.0446 * safezoneH + safezoneY;
			w = 0.154248 * safezoneW;
			h = 0.732 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class PlayerSearch: AH_ctrlEdit
		{
			idc = 1400;
			font = AH_DEFAULT_FONT;

			x = 0.841344 * safezoneW + safezoneX;
			y = 0.7794 * safezoneH + safezoneY;
			w = 0.154248 * safezoneW;
			h = 0.0225577 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch1: AH_ctrlEdit
		{
			idc = 1401;
			font = AH_DEFAULT_FONT;
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			autocomplete = "scripting";

			x = 0.180312 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.546562 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch1Result: AH_ctrlEdit
		{
			idc = 1402;
			font = AH_DEFAULT_FONT;

			x = 0.180312 * safezoneW + safezoneX;
			y = (0.533 * safezoneH + safezoneY)*1.006;
			w = 0.546562 * safezoneW;
			h = 0.0219999 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch1Toggle: AH_ctrlCheckbox
		{
			idc = 2800;
			font = AH_DEFAULT_FONT;

			x = 0.726876 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0141668 * safezoneW;
			h = 0.0262964 * safezoneH;
		};
		class Watch2: AH_ctrlEdit
		{
			idc = 1403;
			font = AH_DEFAULT_FONT;
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			autocomplete = "scripting";

			x = 0.180312 * safezoneW + safezoneX;
			y = 0.5616 * safezoneH + safezoneY;
			w = 0.546562 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch2Result: AH_ctrlEdit
		{
			idc = 1404;
			font = AH_DEFAULT_FONT;

			x = 0.180312 * safezoneW + safezoneX;
			y = (0.595 * safezoneH + safezoneY)*1.005;
			w = 0.546562 * safezoneW;
			h = 0.0219999 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch2Toggle: AH_ctrlCheckbox
		{
			idc = 2801;
			font = AH_DEFAULT_FONT;

			x = 0.726875 * safezoneW + safezoneX;
			y = 0.5616 * safezoneH + safezoneY;
			w = 0.0141668 * safezoneW;
			h = 0.0262964 * safezoneH;
		};
		class Watch3: AH_ctrlEdit
		{
			idc = 1405;
			font = AH_DEFAULT_FONT;
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			autocomplete = "scripting";

			x = 0.180312 * safezoneW + safezoneX;
			y = 0.6232 * safezoneH + safezoneY;
			w = 0.546562 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch3Result: AH_ctrlEdit
		{
			idc = 1406;
			font = AH_DEFAULT_FONT;

			x = 0.180312 * safezoneW + safezoneX;
			y = (0.6562 * safezoneH + safezoneY)*1.005;
			w = 0.546562 * safezoneW;
			h = 0.0219999 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch3Toggle: AH_ctrlCheckbox
		{
			idc = 2802;
			font = AH_DEFAULT_FONT;

			x = 0.726875 * safezoneW + safezoneX;
			y = 0.6232 * safezoneH + safezoneY;
			w = 0.0141668 * safezoneW;
			h = 0.0262964 * safezoneH;
		};
		class Watch4: AH_ctrlEdit
		{
			idc = 1407;
			font = AH_DEFAULT_FONT;
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			autocomplete = "scripting";

			x = 0.180312 * safezoneW + safezoneX;
			y = 0.6848 * safezoneH + safezoneY;
			w = 0.546562 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch4Result: AH_ctrlEdit
		{
			idc = 1408;
			font = AH_DEFAULT_FONT;

			x = 0.180312 * safezoneW + safezoneX;
			y = (0.7182 * safezoneH + safezoneY)*1.005;
			w = 0.546562 * safezoneW;
			h = 0.0219999 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch4Toggle: AH_ctrlCheckbox
		{
			idc = 2803;
			font = AH_DEFAULT_FONT;

			x = 0.726875 * safezoneW + safezoneX;
			y = 0.6848 * safezoneH + safezoneY;
			w = 0.0141668 * safezoneW;
			h = 0.0262964 * safezoneH;
		};
		class Watch5: AH_ctrlEdit
		{
			idc = 1409;
			font = AH_DEFAULT_FONT;
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			autocomplete = "scripting";

			x = 0.180312 * safezoneW + safezoneX;
			y = 0.7464 * safezoneH + safezoneY;
			w = 0.546562 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch5Result: AH_ctrlEdit
		{
			idc = 1410;
			font = AH_DEFAULT_FONT;

			x = 0.180312 * safezoneW + safezoneX;
			y = (0.7794 * safezoneH + safezoneY)*1.005;
			w = 0.546562 * safezoneW;
			h = 0.0219999 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Watch5Toggle: AH_ctrlCheckbox
		{
			idc = 2804;
			font = AH_DEFAULT_FONT;

			x = 0.726875 * safezoneW + safezoneX;
			y = 0.7464 * safezoneH + safezoneY;
			w = 0.0141668 * safezoneW;
			h = 0.0262964 * safezoneH;
		};
		class AH_ExecMode: AH_ctrlCombo
		{
			idc = 2100;
			font = AH_DEFAULT_FONT;
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.4758 * safezoneH + safezoneY;
			w = 0.111605 * safezoneW;
			h = 0.018798 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class AH_ExecArgs: AH_ctrlEdit
		{
			idc = 1411;
			font = AH_DEFAULT_FONT;
			autocomplete = "scripting";
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.4494 * safezoneH + safezoneY;
			w = 0.111605 * safezoneW;
			h = 0.0211125 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class AH_DevOptions: AH_ctrlListbox
		{
			idc = 1501;
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			font = AH_DEFAULT_FONT;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.0446 * safezoneH + safezoneY;
			w = 0.171877 * safezoneW;
			h = 0.948 * safezoneH;
			colorBackground[]      = {0, 0, 0, 0.5};
			colorText[] = {1,1,1,1};
		};
    };
};

class AH_Menu {
    idd = 6971;
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {
		class Fini: AH_RscPicture {
			idc = 501;
			x = 0.968187 * safezoneW + safezoneX;
			y = 0.0314 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
			text = "dialog\AH\fini.paa";
		};
		class Header: AH_ctrlStructuredText
		{
			idc = 2401;
			onLoad = "[(_this select 0)] spawn AH_AM_ManageHeader;";
			font = AH_DEFAULT_FONT;
			text = "UwU";
			size = "10 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
			x=-5.31323e-005 * safeZoneW + safeZoneX;
			y=-7.50085e-005 * safeZoneH + safeZoneY;
			w=1 * safeZoneW;
			h=0.0341667 * safeZoneH;
		};
		class Border: AH_ctrlEdit
		{
			idc = 3000;
			x = 0.00211248 * safezoneW + safezoneX;
			y = 0.09322 * safezoneH + safezoneY;
			w = 0.1845 * safezoneW;
			h = 0.903 * safezoneH;
			colorbackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
		};
		class Border1: Border {
			idc = 3001;
			x = 0.218468 * safezoneW + safezoneX;
			y = 0.1194 * safezoneH + safezoneY;
			w = 0.385 * safezoneW;
			h = 0.877 * safezoneH;
		};
		class Border2: Border {
			idc = 3002;
			x = 0.634056 * safezoneW + safezoneX;
			y = 0.1194 * safezoneH + safezoneY;
			w = 0.364 * safezoneW;
			h = 0.6 * safezoneH;
		};
		class Border3: Border {
			idc = 3003;
			x = 0.634062 * safezoneW + safezoneX;
			y = 0.7222 * safezoneH + safezoneY;
			w = 0.364 * safezoneW;
			h = 0.15 * safezoneH;
		};
    };

    class controls {
		class LeftListbox: AH_ctrlListbox
		{
			font = AH_DEFAULT_FONT;
			idc = 1500;
			sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			colorBackground[]      = {0, 0, 0, 0.5};

			x = 0.00211248 * safezoneW + safezoneX;
			y = 0.09322 * safezoneH + safezoneY;
			w = 0.1845 * safezoneW;
			h = 0.903 * safezoneH;
		};
		class MainListbox: AH_ctrlListbox
		{
			idc = 1501;
			sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			font = AH_DEFAULT_FONT;
			colorBackground[]      = {0, 0, 0, 0.5};

			x = 0.218468 * safezoneW + safezoneX;
			y = 0.1194 * safezoneH + safezoneY;
			w = 0.385 * safezoneW;
			h = 0.877 * safezoneH;
		};
		class RightListbox: AH_ctrlListbox
		{
			idc = 1502;
			sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			font = AH_DEFAULT_FONT;
			colorBackground[]      = {0, 0, 0, 0.5};

			x = 0.634056 * safezoneW + safezoneX;
			y = 0.1194 * safezoneH + safezoneY;
			w = 0.364 * safezoneW;
			h = 0.6 * safezoneH;
		};
		class LeftSearch: AH_ctrlEdit
		{
			idc = 1400;
			sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			font = AH_DEFAULT_FONT;

			x = 0.00190622 * safezoneW + safezoneX;
			y = 0.06242 * safezoneH + safezoneY;
			w = 0.1845 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RightSearch: AH_ctrlEdit
		{
			idc = 1401;
			sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			font = AH_DEFAULT_FONT;

			x = 0.634061 * safezoneW + safezoneX;
			y = 0.0842 * safezoneH + safezoneY;
			w = 0.364 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class MainEdit: AH_ctrlEdit
		{
			idc = 1402;
			style = "0x00 + 0x0200 + 0x10";
			sizeEx = "6 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			font = AH_DEFAULT_FONT;

			x = 0.634062 * safezoneW + safezoneX;
			y = 0.7222 * safezoneH + safezoneY;
			w = 0.364 * safezoneW;
			h = 0.15 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Togglebutton: AH_ctrlButton
		{
			idc = 1009;
			font = AH_DEFAULT_FONT;
			text = "Toggles"; //--- ToDo: Localize;
			x=0.005 + safeZoneX;
			y=0.0379694 * safeZoneH + safeZoneY;
			w=0.06 * safeZoneW;
			h=0.02 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class PlayersBtn: AH_ctrlButton
		{
			idc = 1816;
			font = AH_DEFAULT_FONT;

			text = "Player List"; //--- ToDo: Localize;
			x=0.01 + safeZoneX + (0.06 * safeZoneW);
			y=0.0379694 * safeZoneH + safeZoneY;
			w=0.06 * safeZoneW;
			h=0.02 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class LoadoutsBtn: AH_ctrlButton
		{
			idc = 1809;
			font = AH_DEFAULT_FONT;

			text = "Loadouts"; //--- ToDo: Localize;
			x=0.015 + safeZoneX + (0.06 * safeZoneW)*2;
			y=0.0379694 * safeZoneH + safeZoneY;
			w=0.06 * safeZoneW;
			h=0.02 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class MainBtn: AH_ctrlButton
		{
			idc = 1817;
			font = AH_DEFAULT_FONT;

			text = "Main Menu"; //--- ToDo: Localize;
			x=0.202072 * safeZoneW + safeZoneX;
			y=0.0379694 * safeZoneH + safeZoneY;
			w=0.0625001 * safeZoneW;
			h=0.02 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class AdminLogsBtn: AH_ctrlButton
		{
			idc = 1815;
			font = AH_DEFAULT_FONT;

			text = "Admin Logs"; //--- ToDo: Localize;
			x=0.459884 * safeZoneW + safeZoneX;
			y=0.0379694 * safeZoneH + safeZoneY;
			w=0.0625001 * safeZoneW;
			h=0.02 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class HackerLogsBtn: AH_ctrlButton
		{
			idc = 1814;
			font = AH_DEFAULT_FONT;

			text = "Hacker Logs"; //--- ToDo: Localize;
			x=0.373981 * safeZoneW + safeZoneX;
			y=0.0379694 * safeZoneH + safeZoneY;
			w=0.0625001 * safeZoneW;
			h=0.02 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class WeaponsBtn: AH_ctrlButton
		{
			idc = 1813;
			font = AH_DEFAULT_FONT;

			text = "Weapons"; //--- ToDo: Localize;
			x=0.219294 * safeZoneW + safeZoneX;
			y=0.0819514 * safeZoneH + safeZoneY;
			w=0.0916667 * safeZoneW;
			h=0.0329999 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class VehiclesBtn: AH_ctrlButton
		{
			idc = 1812;
			font = AH_DEFAULT_FONT;

			text = "Vehicles"; //--- ToDo: Localize;
			x=0.316644 * safeZoneW + safeZoneX;
			y=0.0819514 * safeZoneH + safeZoneY;
			w=0.0916667 * safeZoneW;
			h=0.0329999 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class VItemsBtn: AH_ctrlButton
		{
			idc = 1811;
			font = AH_DEFAULT_FONT;

			text = "V-Items"; //--- ToDo: Localize;
			x=0.414097 * safeZoneW + safeZoneX;
			y=0.0819514 * safeZoneH + safeZoneY;
			w=0.0916667 * safeZoneW;
			h=0.0329999 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class BackpacksBtn: AH_ctrlButton
		{
			idc = 1810;
			font = AH_DEFAULT_FONT;
			text = "Backpacks"; //--- ToDo: Localize;
			x=(0.414097 * safeZoneW + safeZoneX)*1.8;
			y=0.0819514 * safeZoneH + safeZoneY;
			w=0.0916667 * safeZoneW;
			h=0.0329999 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class DeathLogsBtn: AH_ctrlButton
		{
			idc = 1808;
			font = AH_DEFAULT_FONT;
			text = "Death Logs"; //--- ToDo: Localize;
			x=0.287975 * safeZoneW + safeZoneX;
			y=0.0379694 * safeZoneH + safeZoneY;
			w=0.0625001 * safeZoneW;
			h=0.02 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class ViewerBtn: AH_ctrlButton
		{
			idc = 1807;
			font = AH_DEFAULT_FONT;
			text = "Variable Viewer"; //--- ToDo: Localize;
			x=(0.459884 * safeZoneW + safeZoneX)*1.5;
			y=0.0379694 * safeZoneH + safeZoneY;
			w=(0.0625001 * safeZoneW)*1.2;
			h=0.02 * safeZoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class ExecBtn: AH_ctrlButton
		{
			idc = 1805;
			font = AH_DEFAULT_FONT;

			text = "Execute"; //--- ToDo: Localize;
			x = 0.634062 * safezoneW + safezoneX;
			y = 0.874 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class MsgEveryBtn: AH_ctrlButton
		{
			idc = 1804;
			font = AH_DEFAULT_FONT;

			text = "Message Everyone"; //--- ToDo: Localize;
			x = 0.735129 * safezoneW + safezoneX;
			y = 0.874 * safezoneH + safezoneY;
			w = 0.162 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
		class MsgTargetBtn: AH_ctrlButton
		{
			idc = 1801;
			font = AH_DEFAULT_FONT;

			text = "Message Target"; //--- ToDo: Localize;
			x = 0.897713 * safezoneW + safezoneX;
			y = 0.874 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.8};
		};
    };
};

class AH_LagSwitch
{
	idd = 6970;
	movingEnabled = false;
	enableSimulation = true;

	 class controlsBackground {
	    class RscText_1004: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 96 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1005: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 34 * GUI_GRID_H + GUI_GRID_Y;
			w = 96 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1006: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = -9 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 43 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1007: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			x = 66.46 * GUI_GRID_W + GUI_GRID_X;
			y = -9 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 43 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1008: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			x = -26.32 * GUI_GRID_W + GUI_GRID_X;
			y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
			w = 92.6061 * GUI_GRID_W;
			h = 42.7096 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.2};
		};
	};

	class controls {
		
		class RscText_1000: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			text = "LAGSWITCH DETECTION";
			x = 10 * GUI_GRID_W + GUI_GRID_X;
			y = -7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 20.5 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
			colorText[] = {135,3,3,1};
			sizeEx = 2 * GUI_GRID_H;
			class Attributes {
                align = "center";
            };
		};
		class RscText_1001: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			text = "NETWORK LAG DETECTED";
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 29 * GUI_GRID_H + GUI_GRID_Y;
			w = 24.5 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
			colorText[] = {135,3,3,1};
			sizeEx = 2 * GUI_GRID_H;
			class Attributes {
                align = "center";
            };
		};
		class RscText_1002: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			text = "<t align='center' size='1.7'>IF YOU ARE EXPERIENCING THESE INTERRUPTIONS, CHECK YOUR CONNECTION</t>";
			x = -17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 75.5 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
			colorText[] = {135,3,3,1};
		};
		class RscText_1003: AH_ctrlStructuredText
		{
			idc = -1;
			font = AH_DEFAULT_FONT;
			text = "IF YOU BELIEVE THIS IS A SERVER SIDE ISSUE, PLEASE REPORT THIS TO OUR SUPPORT TEAM";
			x = -14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 69.5 * GUI_GRID_W;
			h = 7.5 * GUI_GRID_H;
			colorText[] = {135,3,3,1};
			sizeEx = 1.2 * GUI_GRID_H;
            class Attributes {
                align = "center";
            };
		};
	};
};