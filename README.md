# UE4-plugin Multiplayer WeaponManager Beta
## UE4 version 4.25.4
Это бета версия мультиплеерного плагина по созданию и использованию оружия в сетевой игре, позволит вам быстро создавать оружия и использовать их. 
Также с его помошь можно создовать не только огнестрельное оружие но и другие типы такие как: холодное, Бомбы и мины и т.д

[Быстрый старт](README.md#быстрый-старт)

[Как установить](README.md#как-установить)

# Быстрый старт
   * 1.Создать новый класс "Character"
   * 2.Добавить Компанент "GameWeaponManager" смотри изображение ниже
   
![preview](https://github.com/DmitriiBobrovnikov/UE4-plugin_MultiplayerWeaponManager_Beta/blob/gh-pages/Screenshots/Screenshot_2.png)
   * 3.Добавить имя и тип сокета в настройках компонента в TMap "WeaponSoccets" что находится в категории "Weapon Settings"
   * ps/ Сокиты нужно добавить на скелет вашего персонажа под тем же именем что указали при формировании "WeaponSoccets"
   
![preview](https://github.com/DmitriiBobrovnikov/UE4-plugin_MultiplayerWeaponManager_Beta/blob/gh-pages/Screenshots/Screenshot_3.png)

   * 4.Вызываем функции из WeaponManager для реализации использования оружия, такие как (Fire и StopFire) 
   * ps/ Для удобства назвал их так но они используются не только для огнестрельного оружия, но и для всех типов
   
![preview](https://github.com/DmitriiBobrovnikov/UE4-plugin_MultiplayerWeaponManager_Beta/blob/gh-pages/Screenshots/Screenshot_4.png)

   * 5.Вызываем функции из WeaponManager для реализации Логики прицеливания (Specific и StopSpecific) или другой переопределенной логики 
   
![preview](https://github.com/DmitriiBobrovnikov/UE4-plugin_MultiplayerWeaponManager_Beta/blob/gh-pages/Screenshots/Screenshot_5.png)


### *Как установить:* 

   * 1.-Скачать папку WeaponManager
   * 2.-Закинуть эту папку во внуть проекта в папку "ProjectName"/Plugins
   * 3.-Запустить проект и включить плагин в меню плагинов
