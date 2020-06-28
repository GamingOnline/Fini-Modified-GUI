class AH_Menu
{
   idd = 6971;
   movingEnable = 0;
   enableSimulation = 1;
   onLoad = "[6971, 'AH_Menu'] execVM 'dialog\ah_dialog\AH_Script.sqf'";
	class ControlsBackground
	{
		class Background: AN_RscText
		{
			idc = 2200;
			x = safeZoneX + safeZoneW * 0;
			y = safeZoneY + safeZoneH * 0;
			w = safeZoneW * 1.0;
			h = safeZoneH * 1.0;
			colorBackground[] = {0,0,0,0.25};
			fade = 1;
			moving = 0;
		};
		class thingy2: AN_RscStructuredText
		{
			idc = 2435;
			x = safeZoneX + safeZoneW * 0;
			y = safeZoneY + safeZoneH * 0;
			w = safeZoneW * 1.0;
			h = safeZoneH * 0.018;

			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",1};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			fade = 1;
			moving = 0;
		};
	};
	class Controls
	{
		class thingy1: AN_RscStructuredText
		{
			idc = 2401;
			x = safeZoneX + safeZoneW * 0;
			y = safeZoneY + safeZoneH * 0;
			w = safeZoneW * 1.0;
			h = safeZoneH * 0.018;
			text = "";

			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			fade = 1;
			moving = 0;
		};
		class LeftListbox: AN_RscListBox
		{
			idc = 1500;
			x = 0.000800009 * safezoneW + safezoneX;
			y = 0.0622 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.93 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;
		};
		class MainListbox: AN_RscListBox
		{
			idc = 1501;
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.1106 * safezoneH + safezoneY;
			w = 0.703 * safezoneW;
			h = 0.709999 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;
		};
		class RightListbox: AN_RscListBox
		{
			idc = 1502;
			x = 0.8293 * safezoneW + safezoneX;
			y = 0.0622 * safezoneH + safezoneY;
			w = 0.16955 * safezoneW;
			h = 0.929999 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			fade = 1;
			moving = 0;
		};
		class RightSearch: AN_RscEdit
		{
			idc = 1401;
			text = ""; //--- ToDo: Localize;
			x = 0.8293 * safezoneW + safezoneX;
			y = 0.0248 * safezoneH + safezoneY;
			w = 0.16955 * safezoneW;
			h = 0.033 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;
		};
		class LeftSearch: AN_RscEdit
		{
			idc = 1400;
			text = ""; //--- ToDo: Localize;
			x = 0.000800009 * safezoneW + safezoneX;
			y = 0.0248 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.033 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;
		};
		class MainEdit: AN_RscEdit
		{
			idc = 1402;
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.8652 * safezoneH + safezoneY;
			w = 0.703 * safezoneW;
			h = 0.099 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;
		};
		class MainBtn: AN_RscButton
		{
			idc = 1817;
			text = "Main Menu"; //--- ToDo: Localize;
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.0248 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class PlayersBtn: AN_RscButton
		{
			idc = 1816;
			text = "Player List"; //--- ToDo: Localize;
			x = 0.194749 * safezoneW + safezoneX;
			y = 0.0248 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class AdminLogsBtn: AN_RscButton
		{
			idc = 1815;
			text = "Admin Logs"; //--- ToDo: Localize;
			x = 0.265905 * safezoneW + safezoneX;
			y = 0.0248 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class HackerLogsBtn: AN_RscButton
		{
			idc = 1814;
			text = "Hacker Logs"; //--- ToDo: Localize;
			x = 0.338093 * safezoneW + safezoneX;
			y = 0.0248 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class WeaponsBtn: AN_RscButton
		{
			idc = 1813;
			text = "Weapons"; //--- ToDo: Localize;
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.0534 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class VehiclesBtn: AN_RscButton
		{
			idc = 1812;
			text = "Vehicles"; //--- ToDo: Localize;
			x = 0.19475 * safezoneW + safezoneX;
			y = 0.0534 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class VItemsBtn: AN_RscButton
		{
			idc = 1811;
			text = "V-Items"; //--- ToDo: Localize;
			x = 0.265907 * safezoneW + safezoneX;
			y = 0.0534 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class BackpacksBtn: AN_RscButton
		{
			idc = 1810;
			text = "Backpacks"; //--- ToDo: Localize;
			x = 0.338094 * safezoneW + safezoneX;
			y = 0.0534 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class LoadoutsBtn: AN_RscButton
		{
			idc = 1809;
			text = "Loadouts"; //--- ToDo: Localize;
			x = 0.409249 * safezoneW + safezoneX;
			y = 0.0534 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class DeathLogsBtn: AN_RscButton
		{
			idc = 1808;
			text = "Death Logs"; //--- ToDo: Localize;
			x = 0.123594 * safezoneW + safezoneX;
			y = 0.082 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class ViewerBtn: AN_RscButton
		{
			idc = 1807;
			text = "Variable Viewer"; //--- ToDo: Localize;
			x = 0.194749 * safezoneW + safezoneX;
			y = 0.082 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class ExecBtn: AN_RscButton
		{
			idc = 1805;
			text = "Execute"; //--- ToDo: Localize;
			x = 0.123592 * safezoneW + safezoneX;
			y = 0.9664 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class MsgEveryBtn: AN_RscButton
		{
			idc = 1804;
			text = "Message Everyone"; //--- ToDo: Localize;
			x = 0.19475 * safezoneW + safezoneX;
			y = 0.9664 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
		class MsgTargetBtn: AN_RscButton
		{
			idc = 1801;
			text = "Message Target"; //--- ToDo: Localize;
			x = 0.27725 * safezoneW + safezoneX;
			y = 0.9664 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;

			colorText[] = {1,1,1,1};
			colorBackground[] = {0.05,0.05,0.05,0.5};
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
			fade = 1;
			moving = 0;

			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			colorFocused[] = {0, 0, 0, 0.75};
			style = "0x02";
		};
	};
};

class AH_Authenticate
{
	idd = 6972;
	movingEnabled = false;
	enableSimulation = true;
	onLoad = "[6972, 'AH_Authenticate'] execVM 'dialog\ah_dialog\AH_Script.sqf'";

	 class controlsBackground {

        class background: AN_RscText
        {
            idc = 1000;
            x = 0.355625 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.28875 * safezoneW;
            h = 0.242 * safezoneH;

            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,1};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
        class main_text: AN_RscStructuredText
        {
            idc = 1100;
            text = "<t font='RobotoCondensedLight' align='center' valign='top' shadow='1'>Your account must be authenticated to play on this game server.<br/>To authenticate your account, please click the button below.</t>"; //--- ToDo: Localize;
            x = 0.355625 * safezoneW + safezoneX;
				y = 0.401 * safezoneH + safezoneY;
				w = 0.28875 * safezoneW;
				h = 0.11 * safezoneH;
           	
           	colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
        class header_text: AN_RscStructuredText
        {
            idc = 1101;
            x = 0.355625 * safezoneW + safezoneX;
				y = 0.3614 * safezoneH + safezoneY;
				w = 0.28875 * safezoneW;
				h = 0.018 * safezoneH;

            colorText[] = {1,1,1,1};
				colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",1};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
				fade = 1;
				moving = 0;
        };
        class footer_text: AN_RscStructuredText
        {
            idc = 1102;
            text = "<t font='RobotoCondensedLight' align='center' valign='top' shadow='1'>You will be redirected to an external website. You can close the website after authentication has been completed.</t>"; //--- ToDo: Localize;
            x = 0.355625 * safezoneW + safezoneX;
				y = 0.533 * safezoneH + safezoneY;
				w = 0.28875 * safezoneW;
				h = 0.044 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
    };

    class controls {
        class auth_btn: AN_RscButton
        {
            idc = 1600;
            text = "Authenticate now";
            x = 0.355625 * safezoneW + safezoneX;
				y = 0.60032 * safezoneH + safezoneY;
				w = 0.144375 * safezoneW;
				h = 0.02 * safezoneH;
            url = "https://fini.dev/authenticate";

            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
        class close_btn: AN_RscButton
        {
            idc = 1601;
            text = "I've authenticated!";
            x = 0.5 * safezoneW + safezoneX;
				y = 0.60032 * safezoneH + safezoneY;
				w = 0.144375 * safezoneW;
				h = 0.02 * safezoneH;
				action = "closeDialog 0;";

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
    };
};
class AH_LagSwitch
{
	idd = 6970;
	movingEnabled = false;
	enableSimulation = true;

	 class controlsBackground {
	    class RscText_1004: AN_RscText
		{
			idc = -1;
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = -10 * GUI_GRID_H + GUI_GRID_Y;
			w = 96 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1005: AN_RscText
		{
			idc = -1;
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = 34 * GUI_GRID_H + GUI_GRID_Y;
			w = 96 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1006: AN_RscText
		{
			idc = -1;
			x = -28 * GUI_GRID_W + GUI_GRID_X;
			y = -9 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 43 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1007: AN_RscText
		{
			idc = -1;
			x = 66.46 * GUI_GRID_W + GUI_GRID_X;
			y = -9 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.5 * GUI_GRID_W;
			h = 43 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1008: AN_RscText
		{
			idc = -1;
			x = -26.32 * GUI_GRID_W + GUI_GRID_X;
			y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
			w = 92.6061 * GUI_GRID_W;
			h = 42.7096 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.2};
		};
	};

	class controls {
		
		class RscText_1000: AN_RscText
		{
			idc = -1;
			text = "LAGSWITCH DETECTION";
			x = 10 * GUI_GRID_W + GUI_GRID_X;
			y = -7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 20.5 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
			colorText[] = {135,3,3,1};
			sizeEx = 2 * GUI_GRID_H;
		};
		class RscText_1001: AN_RscText
		{
			idc = -1;
			text = "NETWORK LAG DETECTED";
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 29 * GUI_GRID_H + GUI_GRID_Y;
			w = 24.5 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
			colorText[] = {135,3,3,1};
			sizeEx = 2 * GUI_GRID_H;
		};
		class RscText_1002: AN_RscText
		{
			idc = -1;
			text = "IF YOU ARE EXPERIENCING THESE INTERRUPTIONS, CHECK YOUR CONNECTION";
			x = -14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 69.5 * GUI_GRID_W;
			h = 3.5 * GUI_GRID_H;
			colorText[] = {135,3,3,1};
			sizeEx = 2 * GUI_GRID_H;
		};
		class RscText_1003: AN_RscStructuredText
		{
			idc = -1;
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


class AH_ExecMenu
{
    idd=6969;
    movingEnabled = false;
	 enableSimulation = true;
	 onLoad = "[6969, 'AH_ExecMenu'] execVM 'dialog\ah_dialog\AH_Script.sqf'";
    
    class controlsBackground {
        class Background: AN_RscText
        {
            idc = 1700;

            x = 0.29375 * safezoneW + safezoneX;
				y = 0.247 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.492 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
    };

    class controls {
    		class ExecutorTopBackground: AN_RscStructuredText
         {
            idc = 1000;

            x = 0.29375 * safezoneW + safezoneX;
				y = 0.2298 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.018 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",1};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
				fade = 1;
				moving = 0;
         };
        class ScriptEdit: AN_RscEdit
        {
            idc = 1399;

            x = 0.295813 * safezoneW + safezoneX;
				y = 0.2514 * safezoneH + safezoneY;
				w = 0.313 * safezoneW;
				h = 0.32 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class PlayerList: AN_RscListBox
        {
            idc = 1500;

            x = 0.61055 * safezoneW + safezoneX;
				y = 0.2514 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.297 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class ExecPlayer: AN_RscButton
        {
            idc = 1600;

            text = "Execute on Player";
            x = 0.610344 * safezoneW + safezoneX;
				y = 0.5748 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.02 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
        class ExecLocal: AN_RscButton
        {
            idc = 1601;

            text = "Execute (Local)";
            x = 0.31335 * safezoneW + safezoneX;
				y = 0.5748 * safezoneH + safezoneY;
				w = 0.091 * safezoneW;
				h = 0.02 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
        class ExecGloal: AN_RscButton
        {
            idc = 1602;

            text = "Execute (Global)";
            x = 0.40616 * safezoneW + safezoneX;
				y = 0.5748 * safezoneH + safezoneY;
				w = 0.091 * safezoneW;
				h = 0.02 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
        class ExecServer: AN_RscButton
        {
            idc = 1603;

            text = "Execute (Server)";
            x = 0.5 * safezoneW + safezoneX;
				y = 0.5748 * safezoneH + safezoneY;
				w = 0.091 * safezoneW;
				h = 0.02 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
        class PlayerSearch: AN_RscEdit
        {
            idc = 1400;

            x = 0.610344 * safezoneW + safezoneX;
				y = 0.5506 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class ScriptNext: AN_RscButton
        {
            idc = 1604;

            text = ">";
            x = 0.593 * safezoneW + safezoneX;
				y = 0.5748 * safezoneH + safezoneY;
				w = 0.0154688 * safezoneW;
				h = 0.02 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
        class Watch1: AN_RscEdit
        {
            idc = 1401;

            x = 0.295813 * safezoneW + safezoneX;
				y = 0.599 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.02 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class Watch1Result: AN_RscText
        {
            idc = 1402;

            x = 0.295813 * safezoneW + safezoneX;
				y = 0.619 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.02 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class Watch1Toggle: AN_RscCheckbox
        {
            idc = 2800;
            x = 0.68975 * safezoneW + safezoneX;
				y = 0.5946 * safezoneH + safezoneY;
				w = 0.0141668 * safezoneW;
				h = 0.0262964 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {-1,-1,-1,-1};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {1, 1, 1, 1};
				style = "0x02";
        };
        class Watch2: AN_RscEdit
        {
            idc = 1403;

            x = 0.295812 * safezoneW + safezoneX;
				y = 0.6474 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.02 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class Watch2Result: AN_RscText
        {
            idc = 1404;

            x = 0.295813 * safezoneW + safezoneX;
				y = 0.6676 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.02 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class Watch2Toggle: AN_RscCheckbox
        {
            idc = 2801;
            x = 0.68975 * safezoneW + safezoneX;
				y = 0.643 * safezoneH + safezoneY;
				w = 0.0141668 * safezoneW;
				h = 0.0262964 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {-1,-1,-1,-1};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {1, 1, 1, 1};
				style = "0x02";
        };
        class Watch3: AN_RscEdit
        {
            idc = 1405;

            x = 0.295813 * safezoneW + safezoneX;
				y = 0.6936 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.02 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class Watch3Result: AN_RscText
        {
            idc = 1406;

            x = 0.295813 * safezoneW + safezoneX;
				y = 0.7136 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.02 * safezoneH;
            
            colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
        };
        class Watch3Toggle: AN_RscCheckbox
        {
            idc = 2802;
            x = 0.68975 * safezoneW + safezoneX;
				y = 0.6892 * safezoneH + safezoneY;
				w = 0.0141668 * safezoneW;
				h = 0.0262964 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {-1,-1,-1,-1};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {1, 1, 1, 1};
				style = "0x02";
        };
        class ScriptPrevious: AN_RscButton
        {
            idc = 1605;
            text = "<";
            x = 0.295813 * safezoneW + safezoneX;
				y = 0.5748 * safezoneH + safezoneY;
				w = 0.0154688 * safezoneW;
				h = 0.02 * safezoneH;

				colorText[] = {1,1,1,1};
				colorBackground[] = {0.05,0.05,0.05,0.5};
				size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85);
				fade = 1;
				moving = 0;

				colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
				colorFocused[] = {0, 0, 0, 0.75};
				style = "0x02";
        };
    };
};
