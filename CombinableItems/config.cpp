class CfgPatches
{
  class CombinableItems
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={ "DZ_Scripts" };
  };
};

class CfgMods
{
  class CombinableItems
  {
    dir="CombinableItems";
    hideName=0;
    hidePicture=0;
    extra=0;
    name="CombinableItems";
    picture="CombinableItems\data\picture.paa";
    logoSmall="CombinableItems\data\logoSmall.paa";
    logo="CombinableItems\data\logo.paa";
    logoOver="CombinableItems\data\logo.paa";
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=3637996858";
    credits="moldypenguins";
    author="moldypenguins";
    authorID="76561198312711389";
    version="1.2";
    type="mod";
    dependencies[]={ "World" };
    class defs
    {
      class engineScriptModule
      {
        value="";
        files[]={ "CombinableItems\scripts\1_core" };
      };
      class worldScriptModule
      {
        value="";
        files[]={ "CombinableItems\scripts\4_world" };
      };
    }
  };
};
