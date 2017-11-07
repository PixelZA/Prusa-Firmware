/**
 * German
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */

#define WELCOME_MSG							CUSTOM_MENDEL_NAME " bereit."
#define MSG_SD_INSERTED						"SD eingesetzt"
#define MSG_SD_REMOVED						"SD entfernt "
#define MSG_MAIN							"Hauptmenue"
#define MSG_DISABLE_STEPPERS				"Motoren aus"
#define MSG_AUTO_HOME						"Startposition"
#define MSG_SET_HOME_OFFSETS				"Setze Homeversatz"
#define MSG_SET_ORIGIN						"Setze Nullpunkt"
#define MSG_COOLDOWN						"Abkuehlen"
#define MSG_SWITCH_PS_ON					"Netzteil EIN"
#define MSG_SWITCH_PS_OFF					"Netzteil AUS"
#define MSG_MOVE_AXIS						"Bewege Achse"
#define MSG_MOVE_X							"Bewege X"
#define MSG_MOVE_Y							"Bewege Y"
#define MSG_MOVE_Z							"Bewege Z"
#define MSG_MOVE_E							"Extruder"
#define MSG_SPEED							"Geschwindigkeit"
#define MSG_NOZZLE							"Duese"
#define MSG_NOZZLE1							"Duese2"
#define MSG_NOZZLE2							"Duese3"
#define MSG_BED								"Bett"
#define MSG_FAN_SPEED						"Luefter-Tempo"
#define MSG_FLOW							"Durchfluss"
#define MSG_FLOW0							"Durchfluss 0"
#define MSG_FLOW1							"Durchfluss 1"
#define MSG_FLOW2							"Durchfluss 2"
#define MSG_CONTROL							"Einstellungen"
#define MSG_MIN								" \002 Min"
#define MSG_MAX								" \002 Max"
#define MSG_FACTOR							" \002 Fakt"
#define MSG_TEMPERATURE						"Temperatur"
#define MSG_MOTION							"Bewegung"
#define MSG_VOLUMETRIC						"Filament"
#define MSG_VOLUMETRIC_ENABLED				"E in mm3"
#define MSG_STORE_EPROM						"Konfig. speichern"
#define MSG_LOAD_EPROM						"Konfig. laden"
#define MSG_RESTORE_FAILSAFE				"Standardwerte setzen"
#define MSG_REFRESH							"Aktualisieren"
#define MSG_WATCH							"Information"
#define MSG_TUNE							"Feineinstellung"
#define MSG_PAUSE_PRINT						"Pause"
#define MSG_RESUME_PRINT					"Fortsetzen"
#define MSG_STOP_PRINT						"Druck abbrechen"
#define MSG_CARD_MENU						"Drucken von SD"
#define MSG_NO_CARD							"Keine SD Karte"
#define MSG_DWELL							"Warten..."
#define MSG_USERWAIT						"Warte auf Nutzer"
#define MSG_RESUMING						"Druck fortgesetzt"
#define MSG_PRINT_ABORTED					"Druck abgebrochen"
#define MSG_NO_MOVE							"Keine Bewegung."
#define MSG_KILLED							"ABGEBROCHEN. "
#define MSG_STOPPED							"GESTOPPT. "
#define MSG_FILAMENTCHANGE					"Filament-Wechsel"
#define MSG_INIT_SDCARD						"SD erkennen"
#define MSG_CNG_SDCARD						"SD getauscht"
#define MSG_BABYSTEP_X						"Babystep X"
#define MSG_BABYSTEP_Y						"Babystep Y"
#define MSG_BABYSTEP_Z						"Z einstellen"
#define MSG_ADJUSTZ							"Auto Z einstellen?"
#define MSG_PICK_Z							"Waehle Druck"

#define MSG_SETTINGS						"Einstellungen"
#define MSG_PREHEAT							"Vorwaermen"
#define MSG_UNLOAD_FILAMENT					"Filament entladen"
#define MSG_LOAD_FILAMENT					"Filament laden"
#define MSG_LOAD_FILAMENT_1					"Filament 1 laden"
#define MSG_LOAD_FILAMENT_2					"Filament 2 laden"
#define MSG_LOAD_FILAMENT_3					"Filament 3 laden"
#define MSG_LOAD_FILAMENT_4					"Filament 4 laden"
#define MSG_UNLOAD_FILAMENT_1				"Filam.1 entladen"
#define MSG_UNLOAD_FILAMENT_2				"Filam.2 entladen"
#define MSG_UNLOAD_FILAMENT_3				"Filam.3 entladen"
#define MSG_UNLOAD_FILAMENT_4				"Filam.4 entladen"
#define MSG_UNLOAD_ALL						"Alle entladen"
#define MSG_LOAD_ALL						"Alle laden"

#define MSG_RECTRACT						"Retract"
#define MSG_ERROR							"FEHLER:"
#define MSG_PREHEAT_NOZZLE					"Duese vorwaermen!"
#define MSG_SUPPORT							"Support"
#define MSG_CORRECTLY						"Wechsel ok?"
#define MSG_YES								"Ja"
#define MSG_NO								"Nein"
#define MSG_NOT_LOADED 						"Fil. nicht geladen"
#define MSG_NOT_COLOR 						"Farbe nicht klar."
#define MSG_LOADING_FILAMENT				"Filament laedt"
#define MSG_PLEASE_WAIT						"Bitte warten"
#define MSG_LOADING_COLOR					"Lade Farbe"
#define MSG_CHANGE_SUCCESS					"Wechsel erfolgr.!"
#define MSG_PRESS							"und Knopf druecken"
#define MSG_INSERT_FILAMENT					"Filament einlegen"
#define MSG_CHANGING_FILAMENT				"Filament-Wechsel!"

#define MSG_SILENT_MODE_ON					"Mode      [leise]"
#define MSG_SILENT_MODE_OFF					"Mode [Hohe Leist]"
#define MSG_AUTO_MODE_ON					"Mode       [Auto]"
#define MSG_REBOOT							"Zum Uebernehmen "
#define MSG_TAKE_EFFECT						"Drucker neu starten"

#define MSG_Enqueing						"enqueuing \"
#define MSG_POWERUP							"Einschalten"
#define MSG_CONFIGURATION_VER				" Letztes Update: "
#define MSG_FREE_MEMORY						" Freier Speicher: "
#define MSG_PLANNER_BUFFER_BYTES			" PlannerBufferBytes: "
#define MSG_OK								"ok"
#define MSG_ERR_CHECKSUM_MISMATCH			"Pruefsummenfehler, Letzte Zeile: " 
#define MSG_ERR_NO_CHECKSUM					"Keine Pruefsumme mit Zeilennummer, Letzte Zeile: "
#define MSG_BEGIN_FILE_LIST					"Beginn Dateiliste"
#define MSG_END_FILE_LIST					"Ende Dateiliste"
#define MSG_M104_INVALID_EXTRUDER			"M104 Falscher Extruder"
#define MSG_M105_INVALID_EXTRUDER			"M105 Falscher Extruder"
#define MSG_M200_INVALID_EXTRUDER			"M200 Falscher Extruder"
#define MSG_M218_INVALID_EXTRUDER			"M218 Falscher Extruder"
#define MSG_M221_INVALID_EXTRUDER			"M221 Falscher Extruder"
#define MSG_ERR_NO_THERMISTORS				"Keine Thermistoren - keine Temperatur"
#define MSG_M109_INVALID_EXTRUDER			"M109 Falscher Extruder"
#define MSG_HEATING							"Aufwaermen"
#define MSG_HEATING_COMPLETE				"Aufwaermen OK"
#define MSG_BED_HEATING						"Bett aufwaermen"
#define MSG_BED_DONE						"Bett OK"
#define MSG_M115_REPORT						"FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_ERR_KILLED						"Drucker gestoppt. kill() aufgerufen!"
#define MSG_ERR_STOPPED						"Drucker aufgrund von Fehlern gestoppt. Fehler beheben und mit M999 neu starten. (Temperatur wird zurueckgesetzt. Nach dem Neustart neu einstellen!)"
#define MSG_RESEND							"Wiederholen: "
#define MSG_M119_REPORT						"Endschalter Status"
#define MSG_ENDSTOP_HIT						"AUSGELOEST"
#define MSG_ENDSTOP_OPEN					"offen"

#define MSG_SD_CANT_OPEN_SUBDIR				"Kann Unterverz. nicht oeffnen"
#define MSG_SD_INIT_FAIL					"SD Init fehlerhaft"
#define MSG_SD_VOL_INIT_FAIL				"Dateisystem Init fehlerhaft"
#define MSG_SD_OPENROOT_FAIL				"Zugriff auf Basisverzeichnis misslungen"
#define MSG_SD_CARD_OK						"SD Karte ok"
#define MSG_SD_WORKDIR_FAIL					"Oeffnen Arbeitsverzeichnis misslungen"
#define MSG_SD_OPEN_FILE_FAIL				"Fehler beim Oeffnen der Datei: "
#define MSG_SD_FILE_OPENED					"Datei geoeffnet: "
#define MSG_SD_FILE_SELECTED				"Datei ausgewaehlt"
#define MSG_SD_WRITE_TO_FILE				"Schreiben in Datei: "
#define MSG_SD_PRINTING_BYTE				"SD printing byte "
#define MSG_SD_NOT_PRINTING					"Kein SD Druck"
#define MSG_SD_ERR_WRITE_TO_FILE			"Fehler beim Schreiben in Datei"
#define MSG_SD_CANT_ENTER_SUBDIR			"Zugangsproblem Unterverzeichnis: "

#define MSG_STEPPER_TOO_HIGH				"Schrittrate zu hoch"
#define MSG_ENDSTOPS_HIT					"Endschalter erreicht"
#define MSG_ERR_COLD_EXTRUDE_STOP			"Stop, Extruder kalt!"
#define MSG_BABYSTEPPING_X					"Babystepping X"
#define MSG_BABYSTEPPING_Y					"Babystepping Y"
#define MSG_BABYSTEPPING_Z					"Z einstellen"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE		"Menuestruktur fehlerhaft"

#define MSG_LANGUAGE_NAME					"Deutsch"
#define MSG_LANGUAGE_SELECT					"Waehle Sprache"
#define MSG_PRUSA3D							"prusa3d.com"
#define MSG_PRUSA3D_FORUM					"forum.prusa3d.com"
#define MSG_PRUSA3D_HOWTO					"howto.prusa3d.com"

#define MSG_SELFTEST_ERROR					"Selbsttest Fehler !"
#define MSG_SELFTEST_PLEASECHECK			"Bitte pruefe:"
#define MSG_SELFTEST_NOTCONNECTED			"Nicht angeschlossen"
#define MSG_SELFTEST_HEATERTHERMISTOR		"Heater/Thermistor"
#define MSG_SELFTEST_BEDHEATER				"Bed / Heater"
#define MSG_SELFTEST_WIRINGERROR			"Verdrahtungsfehler"
#define MSG_SELFTEST_ENDSTOPS				"Endschalter"
#define MSG_SELFTEST_MOTOR					"Motor"
#define MSG_SELFTEST_ENDSTOP				"Endstop"
#define MSG_SELFTEST_ENDSTOP_NOTHIT			"Endsch. n. erreicht"
#define MSG_SELFTEST_OK						"Selbsttest OK"
#define MSG_LOOSE_PULLEY					"Lose Riemenscheibe"

#define MSG_SELFTEST_FAN					"Lueftertest"
#define MSG_SELFTEST_COOLING_FAN			"Vorderer Luefter?"
#define MSG_SELFTEST_EXTRUDER_FAN			"Linker Luefter?"
#define MSG_SELFTEST_FAN_YES				"Dreht"
#define MSG_SELFTEST_FAN_NO					"Dreht nicht"

#define MSG_STATS_TOTALFILAMENT				"Filament Gesamt:"
#define MSG_STATS_TOTALPRINTTIME 			"Totale Druckzeit:"
#define MSG_STATS_FILAMENTUSED				"Filamentverbrauch:"
#define MSG_STATS_PRINTTIME					"Druckzeit:  "
#define MSG_SELFTEST_START					"Selbsttest start "
#define MSG_SELFTEST_CHECK_ENDSTOPS			"Pruefe Endschalter"
#define MSG_SELFTEST_CHECK_HOTEND			"Pruefe Hotend     " 
#define MSG_SELFTEST_CHECK_X				"Pruefe X Achse    "
#define MSG_SELFTEST_CHECK_Y				"Pruefe Y Achse    "
#define MSG_SELFTEST_CHECK_Z				"Pruefe Z Achse    "
#define MSG_SELFTEST_CHECK_BED				"Pruefe Bett       "
#define MSG_SELFTEST_CHECK_ALLCORRECT		"Alles richtig    "
#define MSG_SELFTEST						"Selbsttest       "
#define MSG_SELFTEST_FAILED					"Selbsttest misluekt"
#define MSG_STATISTICS						"Statistiken "
#define MSG_USB_PRINTING					"Drucken ueber USB"
#define MSG_HOMEYZ							"Kalibrieren Z"
#define MSG_HOMEYZ_PROGRESS					"Kalibriere Z"
#define MSG_HOMEYZ_DONE						"Kalibrierung OK"

#define MSG_SHOW_END_STOPS					"Endstopp-status"
#define MSG_CALIBRATE_BED					"Kalibrierung XYZ"
#define MSG_CALIBRATE_BED_RESET				"Reset XYZ Kalibr."

#define MSG_MOVE_CARRIAGE_TO_THE_TOP 		"Kalibrieren von XYZ. Drehen Sie den Knopf, bis beide Z-Schlitten obere Anschaege erreichen. Klicken wenn beide ganz oben sind."
#define MSG_MOVE_CARRIAGE_TO_THE_TOP_Z 		"Kalibrieren von Z. Drehen Sie den Knopf, bis beide Z-Schlitten obere Anschaege erreichen. Klicken wenn beide ganz oben sind."

#define MSG_CONFIRM_NOZZLE_CLEAN			"Bitte entfernen Sie ueberstehendes Filament von der Duese vor der Kalibrierung. Klicken wenn sauber."
#define MSG_CONFIRM_CARRIAGE_AT_THE_TOP		"Sind die Z-Schlitten ganz oben?"

#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE1		"Suche Bett Kalibrierpunkt"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE2		" von 4"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Verbessere Bett Kalibrierpunkt"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" von 9"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Messen der Referenzhoehe des Kalibrierpunktes"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" von 9"
#define MSG_FIND_BED_OFFSET_AND_SKEW_ITERATION	"Wiederholung "

#define MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"XYZ-Kalibrierung fehlgeschlagen. Bett-Kalibrierpunkt nicht gefunden."
#define MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED			"XYZ-Kalibrierung fehlgeschlagen. Bitte schauen Sie in das Handbuch."
#define MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"XYZ-Kalibrierung ok. X/Y-Achsen sind senkrecht zueinander. Glueckwunsch!"
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"XYZ-Kalibrierung ok. X/Y-Achsen sind leicht asymetrisch. Symetrie wird automatisch korrigiert. Gut gemacht!"
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"XYZ-Kalibrierung ok. X/Y-Achsen sind ziehmlich asymetrisch. Symetrie wird automatisch korrigiert."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"XYZ-Kalibrierung fehlgeschlagen. Linker vorderer Kalibrierpunkt ist zu weit vorne."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR	"XYZ-Kalibrierung fehlgeschlagen. Rechter vorderer Kalibrierpunkt ist zu weit vorne."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"XYZ-Kalibrierung fehlgeschlagen. Vordere Kalibrierpunkte sind zu weit vorne."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR	"XYZ-Kalibrierung ungenau. Linker vorderer Kalibrierpunkt ist zu weit vorne."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"XYZ-Kalibrierung ungenau. Rechter vorderer Kalibrierpunkt ist zu weit vorne."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR	"XYZ-Kalibrierung ungenau. Vordere Kalibrierpunkte sind zu weit vorne."

#define MSG_BED_LEVELING_FAILED_POINT_LOW						"Z-Kalibrierung fehlgeschlagen. Sensor wurde nicht ausgeloest. Schmutzige Duese? Warte auf Reset."
#define MSG_BED_LEVELING_FAILED_POINT_HIGH						"Z-Kalibrierung fehlgeschlagen. Sensor wurde zu hoch ausgeloest. Warte auf Reset."
#define MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED				"Z-Kalibrierung fehlgeschlagen. Sensor nicht angeschlossen oder Kabel defekt. Warte auf Reset."

#define MSG_NEW_FIRMWARE_AVAILABLE			"Neue Firmware Version verfuegbar:"
#define MSG_NEW_FIRMWARE_PLEASE_UPGRADE		"Bitte aktualisieren."

#define MSG_FOLLOW_CALIBRATION_FLOW			"Der Drucker wurde noch nicht kalibriert. Bitte folgen Sie dem Handbuch, Kapitel First steps, Abschnitt Calibration flow."
#define MSG_BABYSTEP_Z_NOT_SET				"Der Abstand zwischen der Spitze der Duese und der Druckoberflaeche / Bett ist noch nicht eingestellt. Bitte folgen Sie dem Handbuch, First steps, section First layer calibration."

#define MSG_FILAMENT_LOADING_T0				"Filament in extruder 1 einlegen. Klicken wenn fertig."
#define MSG_FILAMENT_LOADING_T1				"Filament in extruder 2 einlegen. Klicken wenn fertig."
#define MSG_FILAMENT_LOADING_T2				"Filament in extruder 3 einlegen. Klicken wenn fertig."
#define MSG_FILAMENT_LOADING_T3				"Filament in extruder 4 einlegen. Klicken wenn fertig."
#define MSG_CHANGE_EXTR						"Wechsel extruder"

#define MSG_FIL_ADJUSTING					"FilamenteEinstellen. Bitte warten."
#define MSG_CONFIRM_NOZZLE_CLEAN_FIL_ADJ	"Filamente sind jetzt eingestellt. Bitte reinigen Sie die Duese zur Kalibrierung. Klicken wenn sauber."
#define MSG_STACK_ERROR						"Error - Konfig. wurde ueberschrieben"																																		   
#define MSG_CALIBRATE_E						"Kalibriere E"
//#define MSG_RESET_CALIBRATE_E				"Reset E Cal."
#define MSG_E_CAL_KNOB						"Knopf drehen bis die Filamentmarkierung erreicht ist. Klicken wenn fertig."

//#define MSG_FARM_CARD_MENU				"Farm mode print"
#define MSG_MARK_FIL						"Filament 100mm vom Extrudergehaeuse markieren. Klicken wenn Fertig."
#define MSG_CLEAN_NOZZLE_E					"E-Kalibrierung beendet. Bitte reinigen Sie die Duese. Klicken wenn fertig."
#define MSG_WAITING_TEMP					"Warten auf Abkuehlung von Duese und Bett."
#define MSG_FILAMENT_CLEAN					"Ist Farbe rein?"
#define MSG_UNLOADING_FILAMENT				"Entlade Filament"
#define MSG_PAPER							"Lege waehrend der Kalibrierung der ersten 4 Punkte ein Blatt Papier unter die Duese. Wenn die Duese das Papier bewegt, Drucker sofort ausschalten!"

#define MSG_BED_CORRECTION_MENU				"Bett level korrekt"
#define MSG_BED_CORRECTION_LEFT				"Links     [um]"
#define MSG_BED_CORRECTION_RIGHT			"Rechts    [um]"
#define MSG_BED_CORRECTION_FRONT			"Vorne     [um]"
#define MSG_BED_CORRECTION_REAR				"Hinten    [um]"
#define MSG_BED_CORRECTION_RESET			"Zuruecksetzen"

#define MSG_MESH_BED_LEVELING				"Mesh Bed Leveling"
#define MSG_MENU_CALIBRATION				"Kalibrierung"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF	"SD Karte [normal]"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON	"SD Karte [FlashAir]"
#define MSG_PRINTER_DISCONNECTED			"Drucker getrent"
#define MSG_FINISHING_MOVEMENTS				"Bewegungen beenden"
#define MSG_PRINT_PAUSED					"Druck pausiert"
#define MSG_RESUMING_PRINT					"Druck fortsetzen"
#define MSG_PID_EXTRUDER					"PID Kalibrierung"
#define MSG_SET_TEMPERATURE					"Temp.einstellen"
#define MSG_PID_FINISHED					"PID Kalib. fertig"
#define MSG_PID_RUNNING						"PID Kalib."

#define MSG_CALIBRATE_PINDA					"PINDA Temp. Kal."
#define MSG_CALIBRATION_PINDA_MENU			"PINDA Temp. Kal."
#define MSG_PINDA_NOT_CALIBRATED			"PINDA Temp. wurde nicht kalibriert"
#define MSG_PINDA_PREHEAT					"PINDA erwaermen"
#define MSG_TEMP_CALIBRATION				"PINDA Temp.Kal.     "
#define MSG_TEMP_CALIBRATION_DONE			"PINDA Temp. Kalibrierung fertig. Klicke um fortzufahren."
#define MSG_TEMP_CALIBRATION_ON				"PINDA T.Kal. [ON]"
#define MSG_TEMP_CALIBRATION_OFF			"PINDA T.Kal.[OFF]"

#define MSG_PREPARE_FILAMENT				"Filam. bereithalten"
#define MSG_ALL								"Alle"
#define MSG_USED							"Benutzt beim Druck"
#define MSG_CURRENT							"Aktuelles"
#define MSG_CHOOSE_EXTRUDER					"Waehlen Sie Extruder"
#define MSG_EXTRUDER						"Extruder"
#define MSG_EXTRUDER_1						"Extruder 1"
#define MSG_EXTRUDER_2						"Extruder 2"
#define MSG_EXTRUDER_3						"Extruder 3"
#define MSG_EXTRUDER_4						"Extruder 4"
#define MSG_DATE							"Datum:"
#define MSG_XYZ_DETAILS						"XYZ Kal. Details"
#define	MSG_Y_DISTANCE_FROM_MIN				"Y Entfernung von min"
#define	MSG_LEFT							"Links:"
#define MSG_CENTER							"Mitte:"
#define MSG_RIGHT							"Rechts:"
#define MSG_MEASURED_SKEW					"Symmetrie:"
#define MSG_SLIGHT_SKEW						"Geringe Asym.:"
#define MSG_SEVERE_SKEW						"Schwere Asym.:"
#define MSG_DEFAULT_SETTINGS_LOADED			"Standardeinstellungen wurden zuruckgesetzt"
#define MSG_SORT_TIME						"Sortieren: [Zeit]"
#define MSG_SORT_ALPHA						"Sortieren:[Alpha]"
#define MSG_SORT_NONE						"Sortieren:[Keine]"
#define MSG_SORTING							"Dateien sortieren"
#define MSG_FILE_INCOMPLETE					"Datei unvollstaedig. Trotzdem fortfahren?"
#define MSG_WIZARD							"Assistent"
#define	MSG_WIZARD_WELCOME					"Hallo, ich bin Dein Original Prusa i3 Drucker. Sollen wir mit dem Setup-Prozess beginnen?"
#define MSG_WIZARD_QUIT						"Sie koennen den Assistenten im Menu erneut aufrufen: Kalibrierung -> Assistent"
#define MSG_WIZARD_SELFTEST					"Zunaechst fuehre ich den Selbsttest durch um die haeufigsten Probleme bei der Aufbau zu ueberpruefen."
#define MSG_WIZARD_CALIBRATION_FAILED		"Bitte ueberpruefen Sie unser Handbuch und beheben Sie das Problem. Fahren Sie dann mit dem Assistenten fort, indem Sie den Drucker neu starten."
#define MSG_WIZARD_XYZ_CAL					"Beginne jetzt mit der XYZ-Kalibrierung. Es wird ca. 12 Minuten dauern"
#define MSG_WIZARD_FILAMENT_LOADED			"Ist PLA Filament geladen?"
#define MSG_WIZARD_Z_CAL					"Beginne jetzt mit der Z-Kalibrierung"
#define MSG_WIZARD_WILL_PREHEAT				"Waerme die Duese fuer PLA vor."
#define MSG_WIZARD_HEATING					"Vorwaermen der Duese. Bitte warten."
#define MSG_WIZARD_V2_CAL					"Beginne den Abstand zwischen Duesenspitze und Druckbett zu kalibrieren."
#define MSG_WIZARD_V2_CAL_2					"Ich werde jetzt die erste Linie drucken. Waehrend des Druckes koennen Sie die Duese vorsichtig senken indem Sie den Knopf drehen, bis Sie die optimale Hoehe erreichen. Ueberpruefen Sie die Bilder in unserem Handbuch im Kapitel Calibration."
#define MSG_V2_CALIBRATION					"Erste-Schicht Kal"
#define MSG_WIZARD_DONE						"Fertig. Viel Spass beim Drucken!"
#define MSG_WIZARD_LOAD_FILAMENT			"Fuehren Sie bitte PLA Filament in den Extruder und bestaetigen Sie den Knopf um es zu laden."
#define MSG_WIZARD_RERUN					"Der laufende Assistent loescht die aktuelle Kalibrierergebnisse und wird von Anfang an beginnen. Fortsetzen?"
#define MSG_WIZARD_REPEAT_V2_CAL			"Moechten Sie den letzten Schritt wiederholen um den Abstand zwischen Duese und Druckbett erneut einzustellen?"
#define MSG_WIZARD_CLEAN_HEATBED			"Bitte reinigen Sie das Heizbett und druecken Sie dann den Knopf."
#define MSG_WIZARD_PLA_FILAMENT				"Ist es wirklich PLA Filament"
#define MSG_WIZARD_INSERT_CORRECT_FILAMENT	"Bitte laden Sie PLA-Filament und fahren Sie mit dem Assistenten fort, indem Sie den Drucker neu starten."
#define MSG_PLA_FILAMENT_LOADED				"Ist PLA Filament geladen?"
#define MSG_PLEASE_LOAD_PLA					"Bitte laden Sie zuerst PLA Filament."
#define MSG_FILE_CNT						"Einige Dateien werden nicht sortiert. Max. 100 Dateien innerhalb einem Ordner sind zugelassen."
