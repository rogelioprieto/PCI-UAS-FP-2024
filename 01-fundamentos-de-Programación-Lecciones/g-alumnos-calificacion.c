#include <stdio.h>
int main() {
	const float porcentaje_examen=0.6,porcentaje_asistencia=0.20,porcentaje_tareas=0.20;
        float calificacion;
	int examen,asistencia,tareas;
	scanf("%d",&examen);
	scanf("%d",&asistencia);
	scanf("%d",&tareas);
	calificacion=examen*porcentaje_examen+asistencia*porcentaje_asistencia+tareas*porcentaje_tareas;
	printf("%.0f",calificacion);
	return 0;
}

